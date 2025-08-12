#include <iostream>
using namespace std;

int main() {
    int arr[25]={7,5,4,8,9};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
