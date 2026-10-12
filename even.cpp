#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Kitne numbers enter karne hain? ";
    cin >> n;

    vector<int> vec;

    // User se inputs le kar vector mein daal rahe hain
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        vec.push_back(val);
    }

    // Even numbers ko remove karne ka logic
    for (auto it = vec.begin(); it != vec.end(); ) {
        if (*it % 2 == 0) {
            // jab erase karte hain, toh erase() agle valid element ka iterator return karta hai
            it = vec.erase(it); 
        } else {
            // agar odd number hai, toh simple aage badho
            it++; 
        }
    }

    // Final Vector Print
    cout << "\nEven remove karne ke baad (Sirf Odd Numbers):\n";
    for (auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}