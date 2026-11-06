#include<iostream>
using namespace std;
int main(){
int start,end,original,remainder,reverse=0,count=0;
cout<<"Enter the starting number:";
cin>>start;
cout<<"Enter the ending number:";
cin>>end;
if(start>end){
    cout<<"Invalid Range";
}
else{
for(int i=start;i<=end;i++){
    original=i;
    int temp=i;
    reverse=0;
    while(temp!=0){
        remainder=temp%10;
        reverse=10*reverse+remainder;
        temp/=10;
    }
    if(original==reverse){
    count++;
}
}

cout<<"The number of palindromes between "<<start<<" and "<<end<<" is: "<<count<<endl;




}




    return 0;
}