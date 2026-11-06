#include<iostream>
using namespace std;
int calculate(int& x){
    x=x+3;
  
   return x*2;
}
int main(){
    int a=6;

 
  int result=calculate(a);
  cout<<a<<" "<<result;
 


    return 0;
}