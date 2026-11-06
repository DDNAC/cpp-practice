#include<iostream>
using namespace std;
bool isPalindrome(int num){
    int original,remainder,reverse=0;
    original=num;
    if(num<0){
        return false;
    }
    while(num!=0){
        remainder=num%10;
        reverse=10*reverse+remainder;
        num/=10;
    }
   return original==reverse;
}
int main(){
int num;
cout<<"Enter a number:";
cin>>num;
if(isPalindrome(num)){
    cout<<"The number is a palindrome"<<endl;
}
else{
    cout<<"The number is not a palindrome"<<endl;
}


    return 0;
}