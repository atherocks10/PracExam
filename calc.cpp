#include <iostream>
using namespace std;
int main()
{
    int a,b,ch;
    cout<<"Enter two numbers\n";
    cin>>a;
    cin>>b;
    cout<<"Press 1 to add\n";
    cout<<"Press 2 to sub\n";
    cout<<"Press 3 to mul\n";
    cout<<"Press 4 to div\n";
    cout<<"Enter choice\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            int add=a+b;
            cout<<add;
        }
        break;
        case 2:
        {
            int sub=a-b;
            cout<<sub;
        }
        break;
        case 3:
        {
            int mul=a*b;
            cout<<mul;
        }
        break;
        case 4:
        {
            double div=(double)a/b;
            cout<<div;
        }
        break;
        default:
        cout<<"Invalid choice";
    }
    return 0;
}