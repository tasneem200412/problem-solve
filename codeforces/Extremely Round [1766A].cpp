#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            long long n;
            cin >> n;
            int a = 0;
            long long p = 1;
            while (p <= n) {
                for (int d = 1; d <= 9; ++d) {
                    if (d * p <= n) {
                        a++;
                    }
                }
                p *= 10;
            }
            cout << a << "\n";
        }
    }
    return 0;
}