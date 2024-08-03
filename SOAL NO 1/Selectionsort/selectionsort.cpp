#include <iostream>
#include <string>

using namespace std;

struct Data {
    string nama;
    string alamat;
};

void selectionSort(Data data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (data[j].nama < data[min_idx].nama)
                min_idx = j;

        // Tukar elemen pada indeks i dan min_idx
        swap(data[min_idx], data[i]);
    }
}

void printData(Data data[], int n) {
    for (int i = 0; i < n; i++) {
        cout << data[i].nama << "\t" << data[i].alamat << endl;
    }
}

int main() {
    Data data[] = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"}
    };
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Data sebelum diurutkan:\n";
    printData(data, n);

    selectionSort(data, n);

    cout << "\nData setelah diurutkan:\n";
    printData(data, n);

    return 0;
}
