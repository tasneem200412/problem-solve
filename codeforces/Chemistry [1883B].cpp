#include <bits/stdc++.h>

using namespace std;

void solve()
{

    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int f[26] = {0};
    int pairs = 0;
    int lone = 0;
    for(int i = 0; i < n; i++)
    {

        f[s[i]-'a']++;

    }
    for(int i = 0; i < 26; i++)
    {
        if(f[i]%2 != 0)
        {
            lone++;
        }
    }
    if(lone - k <= 1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }



}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        solve();
    }


    return 0;
}
