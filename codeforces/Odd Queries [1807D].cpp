#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ti;
        cin>>n>>ti;
        int a[n+1];
        int b[n+1];
        b[0]=0;
        for(int i = 1; i<=n; i++)
        {
            cin>>a[i];
            b[i]=b[i-1]+a[i];

        }


        while(ti--)
        {
            int left,right,k;
            cin>>left>>right>>k;

            int oldpart = b[right] - b[left-1];
            int newpart = (right-left+1)*k;
            int su = b[n] -oldpart +newpart;
            if(su%2 != 0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }


    }
    return 0;
}
