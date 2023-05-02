#include <iostream>
using namespace std;

void passByValue(int x) {
    cout << "Dia chi cua bien x truyen tham tri: " << &x << endl;
    x++;
    cout << "Gia tri cua bien x truyen tham tri: " << x << endl;
}

void passByReference(int& x) {
    cout << "Dia chi cua bien x truyen tham chieu: " << &x << endl;
    x++;
    cout << "Gia tri cua bien x truyen tham chieu: " << x << endl;
}

int main() {
    int a = 5;
    cout << "Dia chi cua a trong main: " << &a << endl;

    passByValue(a);
    cout << "Gia tri cua a sau khi truyen tham tri: " << a << endl;

    passByReference(a);
    cout << "GIa tri cua a sau khi truyen tham chieu: " << a << endl;

    return 0;
}
 /*
 đối số và tham trị là hai biến độc lập có địa chỉ khác nhau,
trong khi đối số và tham biến chính là một biến
 */
