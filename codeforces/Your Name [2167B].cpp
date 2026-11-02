#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;

        string s1;
        cin >> s1;
        // cout<<s<<" "<<s1<<endl;
        int f[26] = {0};
        int f1[26] = {0};
        for (int i = 0; i < n; i++)
        {
            f[s[i] - 'a']++;
            f1[s1[i] - 'a']++;
        }
        bool c = true;
        for (int i = 0; i < 26; i++)
        {

            if (f[i] != f1[i])
            {
                c = false;
                break;
            }
        }
        if (c)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}