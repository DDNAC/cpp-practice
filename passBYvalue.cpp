#include<iostream>
using namespace std;
int mystery(int n){
  n=n+1;
  cout<<n<<endl;
 return n+2;
}
void change(int x){
  x=mystery(x);
  cout<<x<<endl;
}
int main(){
int a=3;
change(a);
cout<<a<<endl;


a=mystery(a);
cout<<a;

    return 0;
}