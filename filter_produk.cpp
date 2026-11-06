#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    vector<string> produk = {"Laptop", "Mouse", "Keyboard", "Monitor", "Headset"}; //[cite: 1]

    // 1. Cari apakah produk "Keyboard" ada di dalam daftar[cite: 1]
    auto it_keyboard = find(produk.begin(), produk.end(), "Keyboard");
    bool ada_keyboard = (it_keyboard != produk.end());
    cout << "Apakah Keyboard ada? " << (ada_keyboard ? "true" : "false") << endl;

    // 2. Filter nama produk yang memiliki panjang nama lebih dari 5 karakter[cite: 1]
    vector<string> hasil_filter;
    copy_if(produk.begin(), produk.end(), back_inserter(hasil_filter), [](const string& x) {
        return x.length() > 5;
    });

    cout << "Hasil filter (length > 5): ";
    for (const string& x : hasil_filter) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}