#include <bits/stdc++.h>
using namespace std;
int sum(int a, int b);

int main()
{
    int a, b;
    a = 3;
    b = 5;

    int c;

    cout << a << " " << b << endl; // these values are before I call the function "sum"
    c = sum(a, b);
    // int sum(int a,int b)  //int a -->a, int b-->b
    cout << endl;
    cout << a << " " << b << endl;
    return 0;
}
int sum(int a, int b) { return a + b; }