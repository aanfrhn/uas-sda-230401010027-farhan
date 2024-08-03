#include <iostream>
#include <string>

using namespace std;

struct Person {
    string nama;
    string alamat;
};

void bubbleSort(Person data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j].nama > data[j + 1].nama) {
              
                swap(data[j], data[j + 1]);
            }
        }
    }
}

void printData(Person data[], int n) {
    for (int i = 0; i < n; i++) {
        cout << data[i].nama << "\t" << data[i].alamat << endl;
    }
}

int main() {
    Person data[] = {
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

    bubbleSort(data, n);

    cout << "\nData setelah diurutkan:\n";
    printData(data, n);

    return 0;
}
