#include <iostream>
using namespace std;

int main(){
    int arr[5]; // declaration of array
    // int *arr = new int(5); // dynamic declaration of array

    for(int i = 0;i<5;i++){
        cin >> arr[i];
    }

    for(int i = 0;i<5;i++){
        cout << arr[i];
    }


    return 0;
}