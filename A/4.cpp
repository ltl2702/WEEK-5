#include <iostream>
#include <string>
using namespace std;

void passByValue(int arr[], int size) {
    arr[0] = 100;
    cout << "Value of arr[0] in passByValue: " << arr[0] << endl;
}

void passByReference(int* arr, int size) {
    arr[0] = 100;
    cout << "Value of arr[0] in passByReference: " << arr[0] << endl;
}

void passByValue(string str) {
    str[0] = 'X';
    cout << "Value of str[0] in passByValue: " << str[0] << endl;
}

void passByReference(string& str) {
    str[0] = 'X';
    cout << "Value of str[0] in passByReference: " << str[0] << endl;
}

int main() {
    int arr[3] = {1, 2, 3};
    cout << "Value of arr[0] in main before function call: " << arr[0] << endl;
    passByValue(arr, 3);
    cout << "Value of arr[0] in main after passByValue call: " << arr[0] << endl;
    passByReference(arr, 3);
    cout << "Value of arr[0] in main after passByReference call: " << arr[0] << endl;

    string str = "hello";
    cout << "Value of str[0] in main before function call: " << str[0] << endl;
    passByValue(str);
    cout << "Value of str[0] in main after passByValue call: " << str[0] << endl;
    passByReference(str);
    cout << "Value of str[0] in main after passByReference call: " << str[0] << endl;

    return 0;
}
