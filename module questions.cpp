#include <iostream>

using namespace std;
int main() {
double height,weight,bmi;
cout<<"Enter your height in meters:";
cin>>height;
cout<<"Enter your weight in kilograms:";
cin>>weight;
bmi=weight/(height*height);
cout<<"Your height is "<<height <<" meters"<<endl;
cout<<"Your weight is "<<weight <<" kilograms"<<endl;
cout<<"Your BMI is:"<<bmi<<endl;
    return 0;
}