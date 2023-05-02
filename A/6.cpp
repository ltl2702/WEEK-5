#include <iostream>
using namespace std;


/*DUNG VONG LAP

int binarySearch(int key, int arr[], int low, int high) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key;
    cout<< "Nhap so can tim: ";
    cin >> key;
    int low = 0, high = 9;
    int index = binarySearch(key, a, low, high);
    if (index != -1) {
        cout << "Tim thay " << key << " tai vi tri " << index << endl;
    } else {
        cout << "Khong tim thay " << key << endl;
    }
   return 0;
}
*/

//DUNG DE QUY
int binarySearch(int key, int arr[], int low, int high) {
        if (low > high) {
        return -1;
        }
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            return binarySearch(key, arr, low, mid - 1);
        } else {
            return binarySearch(key,arr,mid+1,high);
        }
}
int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key;
    cout<< "Nhap so can tim: ";
    cin >> key;
    int low = 0, high = 9;
    int index = binarySearch(key, a, low, high);
    if (index != -1) {
        cout << "Tim thay " << key << " tai vi tri " << index << endl;
    } else {
        cout << "Khong tim thay " << key << endl;
    }
   return 0;
}
