#include<iostream>
#include<string.h>
#include<sstream>
#include<math.h>
using namespace std;

const int INF = (int) 1e9;
double cost_per_kwh[] = {1.484, 1.533, 1.786, 2.242, 2.503, 2.587};
int standard_rate[] = {50, 50, 100, 100, 100, INF};

bool leapyear(int n){
    if (n%4==0 || n%400==0){
        if (n%100!=0) return true;
    }
    return false;
    }
int numofday(int pmonth,int n){
    if (pmonth==1 || pmonth ==3 || pmonth ==5 || pmonth ==7 || pmonth ==8 || pmonth ==10 || pmonth ==12){
        return 31;
    }
    if (pmonth==4 || pmonth ==6 || pmonth ==9 || pmonth ==11){
        return 30;
    }
    if (leapyear(n)== true && pmonth ==2){
        return 29;
    }
    return 28;
    }
int main(){
	istringstream convert;
	string pdate;
	cout<<"Please enter the previous date:";
	getline(cin,pdate);

	int pday;
	istringstream(pdate.substr(0,2)) >> pday;

	int pmonth;
	istringstream(pdate.substr(3,2)) >> pmonth;

	int pyear;
	istringstream(pdate.substr(6,4)) >> pyear;

	string ldate;
	cout<<"Please enter the latest date:";
	getline(cin,ldate);

	int lday;
	istringstream(ldate.substr(0,2)) >> lday;

	int lmonth;
	istringstream(ldate.substr(3,2)) >> lmonth;

	int result;
	result = numofday(pmonth,pyear) - pday + lday + 1;

	//cout<<result<<endl;
	//cout<<numofday(pmonth, pyear);

	int t = numofday(pmonth, pyear);
	int n = result;
	double cost = 0;
	int num_households;
	cout<<"Enter number of households:";
	cin>>num_households;

	unsigned int previous_meter_read;
	cout<<"Please enter the previous meter read:";
	cin>>previous_meter_read;

	unsigned int latest_meter_read;
	cout<<"Please enter the latest meter read:";
	cin>>latest_meter_read;

	int usage = latest_meter_read - previous_meter_read;

	for (int i = 0; i < 6; i++) {
    	int customer_rate = (int) ceil(standard_rate[i] * ((double) n / t) * num_households);
    	if (usage <= customer_rate) {
    		cost = cost +  usage * cost_per_kwh[i];
    		usage = 0;
    		break;
    	}
    	else {
    		cost = cost +  customer_rate * cost_per_kwh[i];
    		usage = usage - customer_rate;
    	}
    }

    cost = cost + cost * 10/100;

    cout << "Total cost that you need ot pay: " << cost << "\n";
	return 0;
}
