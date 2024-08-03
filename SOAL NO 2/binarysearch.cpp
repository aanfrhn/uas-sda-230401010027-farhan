#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = { 19, 40, 10, 90, 2, 50, 60, 50, 1 };

    // Mengurutkan array secara descending
    sort(arr.begin(), arr.end(), greater<int>());

    cout << "Array yang sudah diurutkan secara descending: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    int target;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> target;

    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Angka " << target << " ditemukan pada indeks " << result << endl;
    }
    else {
        cout << "Angka " << target << " tidak ditemukan dalam array" << endl;
    }

    return 0;
}