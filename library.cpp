#include <iostream>
#include<cmath>
using namespace std;
int main() {
int units;
double bill;
cout<<"Enter units consumed;"
cin>>units;
if(units<0){
    cout<<"Invalid input";
}
else if(units<=100){
    bill=units*2;
    cout<<"the bill="<<bill;
}
else if(units<=200){
    bill=(units*2)+(units-100)*3;
   
}
else{
      bill=(units*2)+(units-100)*3+(units-200)*5;
 cout<<"the bill"<<bill;
}
    return 0;
}
