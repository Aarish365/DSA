
// Jab tum function ko array dete ho:

// cpp
// Copy code
// changeArray(nums, 5);
// to pure array copy nahi hota, sirf uska address bheja jaata hai.

// Function ke andar jo bhi change karoge, wo usi address wale array pe hoga.

// Isliye original array change ho jaata hai.

#include <iostream>
using namespace std;

void change(int arr[]) {
    arr[0] = 999; // pehle element ko change kar diya
}

int main() {
    int a[3] = {1, 2, 3};
    change(a); // array ka address gaya
    cout << a[0]; // 999 print hoga
}
