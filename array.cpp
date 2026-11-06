#include<iostream>
using namespace std;
int main(){
int mtable[12][12];
cout<<"MULTIPLICATION TABLE";
for(int i=0;i<12;i++){
    cout<<i+1<<"....";
    for(int j=0;j<12;j++){
        mtable[i][j]=(i+1)*(j+1);
        cout<<mtable[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}