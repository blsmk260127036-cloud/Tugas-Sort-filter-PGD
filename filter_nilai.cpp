#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    vector<int> nilai_siswa = {60, 85, 40, 90, 75, 50, 90};
    
    auto it = find(nilai_siswa.begin(), nilai_siswa.end(), 85);
    if (it != nilai_siswa.end()) {
        int posisi_85 = distance(nilai_siswa.begin(), it);
        cout << "Nilai 85 ada di posisi " << posisi_85 << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    vector<int> hasil_filter;
    copy_if(nilai_siswa.begin(), nilai_siswa.end(), back_inserter(hasil_filter), [](int x) { return x > 75; });
    
    cout << "Hasil filter: ";
    for (int nilai : hasil_filter) {
        cout << nilai << " ";
    }
    cout << endl;

    return 0;
}