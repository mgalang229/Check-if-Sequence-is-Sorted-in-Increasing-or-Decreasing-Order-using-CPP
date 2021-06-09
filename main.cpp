#include <bits/stdc++.h>

using namespace std;

bool IncreasingOrder(vector<int> a) {
    if (is_sorted(a.begin(), a.end())) {
        return true;
    }
    return false;
}

bool DecreasingOrder(vector<int> a) {
    if (is_sorted(a.rbegin(), a.rend())) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (IncreasingOrder(a)) {
        cout << "Sorted in Increasing Order!";
    } else if (DecreasingOrder(a)) {
        cout << "Sorted in Decreasing Order!";
    } else {
        cout << "Not Sorted at all!";
    }
    cout << '\n';
    return 0;
}
