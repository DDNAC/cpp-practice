#include<iostream>
using namespace std;
int main(){

double GPA,income;
int disciplinaryStatus;
cout<<"Enter your GPA:";
cin>>GPA;
cout<<"Enter your income:";
cin>>income;
cout<<"Enter your disciplinary status(0 for no,1 for yes):";
cin>>disciplinaryStatus;
if(GPA<0||GPA>4||income<0||disciplinaryStatus<0||disciplinaryStatus>1){
    cout<<"Invalid input";
}
else{
if(GPA>=3.80 && income<=5000 && disciplinaryStatus==0){
    cout<<"You are eligible for FULL scholarship";
}
else if(GPA>=3.50 && income<=8000 && disciplinaryStatus==0){
    cout<<"You are eligible for PARTIAL scholarship";
}
else{
    cout<<"You are not eligible for any scholarship";
}

}


    return 0;
}