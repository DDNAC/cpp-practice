#include <iostream>
using namespace std;

int expo(float base,int n){
    if(n==0){
        return 1;
    }
  
   if(n==1){
    return base;
   }
   if(n>1){
    return base*expo(base,n-1);
}
}

int main()
{
    float base;
    int n;
    cout<<"enter the base:";
    cin>>base;
    cout<<"enetr the exponent:";
    cin>>n;
    cout<<base<<"^" << n <<"="<<expo(base,n)<<endl;
    return 0;
}