#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    string s, s1;
    cin >> s >> s1;

    int f1[26] = {0};
    int f2[26] = {0};

    for (int i = 0; i < n; i++) {
        f1[s[i] - 'a']++;
    }

    for (int i = 0; i < m; i++) {
        f2[s1[i] - 'a']++;
    }

    bool is_possible = true;

    for (int i = 0; i < 26; i++) {
        int diff = f1[i] - f2[i];

        if (i == ('s' - 'a') || i == ('i' - 'a') || i == ('x' - 'a')) {
            if (diff != 1) {
                is_possible = false;
                break;
            }
        } else {
            if (diff != 0) {
                is_possible = false;
                break;
            }
        }
    }

    if (is_possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

