#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main() {
    vector<int> angka_Asc = {5, 2, 9, 1};
    vector<int> angka_Desc = {5, 2, 9, 1};

    sort(angka_Asc.begin(), angka_Asc.end());
    cout << "ascending: ";
    for (int x : angka_Asc) {
        cout << x << " ";
    }
    cout << endl;

    sort(angka_Desc.begin(), angka_Desc.end(), greater<int>());
    cout << "descending: ";
    for (int x : angka_Desc) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}