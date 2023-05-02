#include<iostream>
using namespace std;

int factorial(int x)
{
    cout << "x = " << x << " at" << &x << endl;
    if (x==0) return 1;
    else return factorial(x-1)*x;
}
int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
cout << "Giai thua cua " << n << ": " <<factorial(n);
}
