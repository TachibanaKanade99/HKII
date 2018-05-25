#include <iostream>
#include <math.h>
#include <string>

// Debug macro
#define debug(X) { cerr << #X << " = " << (X) << endl; }

using namespace std;


const int INF = (int) 1e9;


// Given details
double cost_per_kwh[] = {1.484, 1.533, 1.786, 2.242, 2.503, 2.587};
int standard_rate[] = {50, 50, 100, 100, 100, INF};


// Dates
string cur_date, prev_date;
int prev_day, prev_month, prev_year;
int cur_day, cur_month, cur_year;


// Reads
long long prev_read, cur_read;


// Number of households
int num_households;


// Preprocess date strings into numbers
void preprocess_dates() {
	prev_day = stoi(prev_date.substr(0, 2));
    prev_month = stoi(prev_date.substr(3, 5));
    prev_year = stoi(prev_date.substr(6));

    cur_day = stoi(cur_date.substr(0, 2));
    cur_month = stoi(cur_date.substr(3, 5));
    cur_year = stoi(cur_date.substr(6));
}


bool is_leap_year(int year) {
    if (year % 100 == 0 && year % 400 != 0) {
        return false;
    }
    if (year % 4 == 0) {
        return true;
    }
    return false;
}


int num_days_of_month(int month, int year) {
    if (month == 1 || month == 3
                   || month == 5
                   || month == 7
                   || month == 8
                   || month == 10
                   || month == 12)  
        return 31;
        
    if (month == 4 || month == 6
                   || month == 9
                   || month == 11)
        return 30;

    if (is_leap_year(year)) {
        return 29;
    }
    
    return 28;
}


int calc_num_days() {
    int result = 0;

    result += num_days_of_month(prev_month, prev_year) - prev_day + 1;
    result += cur_day - 1;

    return result;
}


long long calc_usage() {
	return (cur_read - prev_read);
}


int main() {
    /* Input */
    // freopen("test.txt", "r", stdin);
    // cout << "Previous month:\n";
    // cout << "Date: ";
    cin >> prev_date;
    // cout << "Read: ";
    cin >> prev_read;

    // cout << "Today:\n";
    // cout << "Date: ";
    cin >> cur_date;
    // cout << "Read: ";
    cin >> cur_read;

    // cout << "Number of household(s): ";
    cin >> num_households;

    double cost = 0;

    preprocess_dates();
    int usage = calc_usage();
    int n = calc_num_days();
    int t = num_days_of_month(prev_month, prev_year);
    
    for (int i = 0; i < 6; i++) {
    	int customer_rate = (int) ceil(standard_rate[i] * ((double) n / t) * num_households);
    	if (usage <= customer_rate) {
    		cost += usage * cost_per_kwh[i];
    		usage = 0;
    		break;
    	}
    	else {
    		cost += customer_rate * cost_per_kwh[i];
    		usage -= customer_rate;
    	}
    }

    cost = cost * 110 / 100;

    cout << "Total cost: " << cost << "\n";

    return 0;
}

