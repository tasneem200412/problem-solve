#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int c = n;
        int j = 0;
        int u = 0;

        while(n>0)
        {
            if(n%k!=0)
            {
                j= n;
                u= c-n;
                break;
            }

            else
            {
                n--;
            }

        }
        if(u==0)
        {
            cout<<"1"<<endl;
            cout<<j<<endl;
        }
        else
        {
            cout<<"2"<<endl;
            cout<<u<<" "<<j<<endl;
        }

    }

  return 0;
}
