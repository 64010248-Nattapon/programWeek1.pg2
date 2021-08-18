#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3];

    cout << "Enter 3 numbers: ";
    for (int i = 0; i < 3; ++i)
    {
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    cout << "\n"
        "Number sort is : \n";

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    cout << "\nMaximum value is : \n";
    cout << arr[2];

    return 0;
}