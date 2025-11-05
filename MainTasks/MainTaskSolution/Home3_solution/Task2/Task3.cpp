#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canSplit(const vector<int>& arr, int S) {
    int current_sum = 0;
    for (int x : arr) {
        current_sum += x;
        if (current_sum > S) return false;
        if (current_sum == S) current_sum = 0;
    }
    return current_sum == 0;
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    int total = 0, max_a = 0;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
        total += arr[i];
        max_a = max(max_a, arr[i]);
    }

    int ans = total; 

    for (int S = max_a; S <= total; ++S) {
        if (total % S == 0) {
            if (canSplit(arr, S)) {
                ans = S;
                break; 
            }
        }
    }

    cout << ans << endl;

    return 0;
}