#include <iostream>
using namespace std;

int main()
{
    int items;
    cout<<"Enter the total amount of items: ";
    cin>>items;
    int boxes=items/12;
    int remaining_items=items%12;
    cout<<"The total amount of boxes is "<<boxes<<endl;
    cout<<"The total amount of the remaining items is "<<remaining_items<<endl;
    return 0;
}