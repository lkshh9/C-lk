#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array ";
    cin >> n;

    int arr[n];
    cout <<"Enter the elements ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n/2;i++){
        int temp;
        temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}