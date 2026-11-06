#include<iostream>
#include<string>
using namespace std;
struct student{
  string name;
  int id;
  float marks[3];
};
int main(){
    student students[3];

    for(int i=0;i<3;i++){
        cout<<"Enter ur name:"<<endl;
       getline(cin>>ws,students[i].name);
        cout<<"Enter ur id:"<<endl;
        cin>>students[i].id;
        for(int j=0;j<3;j++){
            cout<<"Enter ur mark "<<j+1<<":";;
            cin>>students[i].marks[j];
        }
    }
    for(int i=0;i<3;i++){
        float sum=0;
    for(int j=0;j<3;j++){
        sum+=students[i].marks[j];
    }

float average=sum/3.0;
cout<<"Name:"<<students[i].name<<endl;
cout<<"ID:"<<students[i].id<<endl;
cout<<"Average:"<<average<<endl;
    }



    return 0;
}