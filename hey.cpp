#include <iostream>
using namespace std;

int main(){
int day,month,year,maxDays;
cout<<"Enter the day:";
cin>>day;
cout<<"Enter the month:";
cin>>month;
cout<<"Enter the year:";
cin>>year;
if(day<1||day>31||month<1||month>12||year<1){
    cout<<"Invalid date";
}
else{
    if(month==2){
        if(year%4==0){
            maxDays=29;
        }
        else{
            maxDays=28;
        }
    }
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
            maxDays=31;

    }
    else{
        maxDays=30;
    }
}
if(day>0 && day<=maxDays){
    cout<<"Valid date";
}
else{
    cout<<"Invalid date";
}
    return 0;
}