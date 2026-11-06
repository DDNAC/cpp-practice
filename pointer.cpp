#include<iostream>
using namespace std;
int main(){
int size;
cout<<"Enter the number of students:";
cin>>size;
int sum=0;
int *ptr=new int[size];
cout<<"Enter the marks of the students:"<<endl;
for(int i=0;i<size;i++){
cin>>ptr[i];
sum+=ptr[i];

}
int highest=ptr[0];
for(int i=0;i<size;i++){
if(*(ptr+i)>highest)
highest=*(ptr+i);
}
    double average=static_cast<double>(sum)/size;
cout<<"Average marks is: "<<average<<endl;
cout<<"Highest mark is: "<<highest<<endl;
delete[] ptr;
ptr=nullptr;
    return 0;

}