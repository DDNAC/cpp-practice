#include<iostream>
using namespace std;
int main(){
int num,original,remainder,reverse=0;
cout<<"Enter a number:";
cin>>num;
original=num;
if(num<0){
    cout<<"Negative numbers are not a palindrome";
   
}
while(num!=0){
 remainder=num%10;
 reverse=10*reverse + remainder;
 num/=10;

}
if(original==reverse){
    cout<<"The number is a palindrome";
}
else{
    cout<<"The number is not a palindrome";
}


    return 0;
}