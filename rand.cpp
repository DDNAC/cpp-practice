#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
    int main(){
      srand(time(0));
int randomNum=rand()%100+1;
int x=randomNum;
if(randomNum%2==0){
    cout<<x<<" is even: "<<endl;
}
else{
    cout<<x<<" is odd: "<<endl;
}
return 0;
    }