#include <bits/stdc++.h>
using namespace std;
int main()
{ /*int a[4]; int i;
cout<<"Enter 5 elements of the array:"<<endl;
 for(i=0;i<5;i++){
    cin>>a[i]; }
    for(i=0;i<5;i++){
         cout<<a[i]<<" "; }*/

    int a[9];
    int i;
    cout << "Enter the elements of array:" << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (i = 9; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}