#include <iostream>
using namespace std;

int main() {
   int a[10] = {1,2,3,4,5,6,7,8,9,10}; // Khai báo mảng a kiểu int với 10 phần tử
   char b[10] = {'a','b','c','d','e','f','g','h','i','j'}; // Khai báo mảng b kiểu char với 10 phần tử
   int x = 5; // Khai báo một biến int trước mảng a
   char c = 'k'; // Khai báo một biến char sau mảng b

   // In địa chỉ của 3 phần tử liên tiếp trong mảng a
   cout << "Dia chi cac phan tu lien tiep trong mang a: " << endl;
   for (int i = 0; i < 3; i++) {
       cout << &a[i] << " ";
   }
   cout << endl;

   // In địa chỉ của 3 phần tử liên tiếp trong mảng b
   cout << "Dia chi cac phan tu lien tiep trong mang b: " << endl;
   for (int i = 0; i < 3; i++) {
       cout << (void *)&b[i] << " "; // Sử dụng cast sang kiểu void* để in địa chỉ của mảng char
   }
   cout << endl;

   // In địa chỉ của biến x
   cout << "Dia chi cua bien x: " << &x << endl;

   // In địa chỉ của biến c
   cout << "Dia chi cua bien c: " << (void *)&c << endl;

   return 0;
}

/*
Kết quả:
- Địa chỉ của các phần tử liên tiếp trong mảng a và mảng b sẽ khác nhau.
- Các địa chỉ của các phần tử liên tiếp trong mảng a sẽ cách nhau 4 byte (vì int chiếm 4 byte), trong khi các địa chỉ của các phần tử liên tiếp trong mảng b sẽ cách nhau 1 byte (vì char chỉ chiếm 1 byte).
- Biến x sẽ có địa chỉ ngay trước địa chỉ của phần tử đầu tiên trong mảng a (vì int chiếm 4 byte), trong khi biến c sẽ có địa chỉ ngay sau địa chỉ của phần tử cuối cùng trong mảng b (vì char chỉ chiếm 1 byte).
*/
