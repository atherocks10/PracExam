#include <iostream>
using namespace std;
int main()
{
    int a,b,ch;
    cout<<"Enter two numbers";
    cin>>a;
    cin>>b;
    cout<<"Press 1 to add";
    cout<<"Press 2 to sub";
    cout<<"Press 3 to mul";
    cout<<"Press 4 to div";
    cout<<"Enter choice";
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