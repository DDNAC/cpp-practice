#include<iostream>
using namespace std;
int reverseNumber(int a){
   int reverse=0;
   int remainder;
   int original=0;
   while(a>0){
    remainder=a%10;
    reverse=10*reverse+remainder;
    a=a/10;
   }
 return reverse;
}
int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
   
   cout<<"the reversed number of  "<< a <<" is "<<reverseNumber(a);
    return 0;
}