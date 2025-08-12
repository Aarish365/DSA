 #include <iostream>  
using namespace std;

int main() {
    int arr[5] = {5, 4, 3, 9, 12};
    int maxValue = arr[0]; // array ke pehle element se start karo

    for (int i = 1; i < 5; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i]; // update maximum
        }
    }

    cout << "Maximum value: " << maxValue << endl;
    return 0;
}

// User Input
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxValue = arr[0]; // starting with first element

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i]; // update maximum
        }
    }

    cout << "Maximum value: " << maxValue << endl;
    return 0;
}
