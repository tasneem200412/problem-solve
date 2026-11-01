#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        if(a[0]==a[n-1])
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int b = 0;
            for(int i = 0; i < n-1; i++)
            {
                if(a[i]!=a[n-1])
                {
                    b++;
                }
            }
            int c = n-b;
            cout<<b<<" "<<c<<"\n";
            for(int i = 0; i< b; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<"\n";
            for(int i = b; i < n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<"\n";

        }
    }

    return 0;
}
