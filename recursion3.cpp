#include<iostream>
using namespace std;
int recursiveReverse(int n,double result=0){
    if(n==0){
      
       return result;
    }
    while(n!=0){
       return recursiveReverse(n/10,result*10+n%10);
    }
}
int main(){
    int n;
cout<<"Enter a number:";
cin>>n;
cout<<"The reverse of "<<n<<" is:"<<recursiveReverse(n)<<endl;
    return 0;
}