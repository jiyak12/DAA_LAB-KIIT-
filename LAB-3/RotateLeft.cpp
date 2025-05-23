#include <bits/stdc++.h>
using namespace std;

void rotateLeft(vector<int>& array, int k) {
    for (int i = 0; i<k-1; i++) {
        swap(array[i], array[i+1]);
    }
}

int main() {
    cout << "Enter size of the array: ";
    int n; cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of the array (seperated by space)\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cout << "Enter by how many positions you want to rotate: ";
    cin >> k;
    rotateLeft(arr, k);
    cout << "Rotated Array:\n";
    for (auto n: arr) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
