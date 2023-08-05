#include <bits/stdc++.h>
using namespace std;
int main()
    /*{ float a,b; cout<<"Enter floating numbers a and b:"<<endl; cin>>a>>b;

if(a>0.01 && b>a){
    cout<<"The statement in if statement is correct:";
}
{ int marks; cout<<"Enter students marks:"<<endl; cin>>marks; if(marks>90){ cout<<"Grade A"; } else if(marks<90 && marks>80){ cout<<"Grade B"; } else if(marks<80 && marks>70){ cout<<"Grade C"; } else cout<<"Pass";*/

    { /* int a,b,c,d; cout<<"Enter numbers a,b,c and d:"<<endl; cin>>a>>b>>c>>d; if(a>b && c>d){ cout<<"haha"; } else if(a>b && c<d){ cout<<"hehe"; } else if(a<b && c>d){ cout<<"huhu"; } else{ cout<<"khikhikhi....."; }*/
        int a;
        cout << "Enter integer a " << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "The value of a is 1 ";
            break;
        case 2:
            cout << "The value of a is 2 ";
            break;
        case 3:
            cout << "The value of a is 3 ";
            break;
        default:
            cout << "Default will be printed ";
        }
        return 0;
    }