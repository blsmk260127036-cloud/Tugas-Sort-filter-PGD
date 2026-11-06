#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> suhu = {-3, 5, 0, -12, 8, 15, -1, 22};

    auto it_0 = find(suhu.begin(), suhu.end(), 0);
    bool ada_0 = (it_0 != suhu.end());
    cout << "apakah 0 ada? " << (ada_0 ? "true" : "false") << endl;

    vector<int> hasil_filter;
    copy_if(suhu.begin(), suhu.end(), back_inserter(hasil_filter), [](int x) { 
        return x > 0; 
    });

    cout << "hasil filter (suhu > 0): ";
    for (int x : hasil_filter) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}