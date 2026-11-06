

#include <iostream>
using namespace std;

int main()
{
  int entrance,interview,total;
  cout<<"Eneter your entrance score:";
  cin>>entrance;
  cout<<"Enter your interview score:";
  cin>>interview;
if(entrance<0||interview<0||entrance>100||interview>100){
    cout<<"Invalid Score";
}
else{
      total=entrance+interview;
      if(entrance>=70 && interview>=60 && total>=150){
        cout<<"You are selected";
      }
else{
    cout<<"You are not selected"<<endl;
    if(entrance<70){
        cout<<"Your entrance score is below the minimum requirement."<<endl;
    }
    if(interview<60){
        cout<<"Your interview score is below the minimum requirement."<<endl;
    }
    if(total<150){
        cout<<"Your total score is below the minimum requirement."<<endl;
    }
}
}
    return 0;
}