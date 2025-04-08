#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max = 0, sum = 0, indi = 0, indj = 0, temp = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum <= 0) {
            sum = 0;
            temp = i + 1;
        }
        if (sum > max) {
            max = sum;
            indi = temp;
            indj = i;
        }
    }
    cout << indi + 1 << " " << indj + 1;
}
