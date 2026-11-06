#include<iostream>
using namespace std;
bool isPalindrome(int num){
    int original=num;
    int temp=num;
    int reverse=0;
    while(temp!=0){
        int remainder=temp%10;
        reverse=10*reverse+remainder;
        temp/=10;
    }
    return original==reverse;
}
bool isPrime(int num){
    if(num<2){
        return false;
    }
   
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int count=0;
    
    for(int i=1;i<=1000;i++){
        if(isPalindrome(i)&&isPrime(i)){
            count++;
            cout<<i<<" "<<endl;
        }
    }
    
    cout<<"Count: "<<count<<endl;
    return 0;
}
    