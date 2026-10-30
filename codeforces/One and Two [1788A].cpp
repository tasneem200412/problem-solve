/*#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        long long lhs = 1;
        long long rhs = 1;
        ll ans = -1;
        for(ll i = 0; i<n; i++)
        {
            cin>>a[i];
            rhs = rhs*a[i];
        }
        for(ll i = 0; i<n-1; i++)
        {
            lhs = lhs*a[i];
            rhs = rhs/a[i];
            if(lhs == rhs)
            {
                ans = i+1;
                break;
            }

        }
        cout<<ans<<endl;


    }
    return 0;
}*/#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        long long lhs = 0;
        long long rhs = 0;
        ll ans = -1;
        for(ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == 2)
            {
                rhs++;
            }
        }
        for(ll i = 0; i < n - 1; i++)
        {
            if(a[i] == 2)
            {
                lhs++;
                rhs--;
            }
            if(lhs == rhs)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
