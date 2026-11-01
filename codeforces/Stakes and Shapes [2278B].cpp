#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {

        int r,s,p;
        cin>>r>>s>>p;
        int rou = r+s+p;
        for(int i = 1; i<=rou; i++)
        {
            if (s >= p)
            {
                cout<<"R";
            }
            else if(r >= s)
            {
                cout<<"P";
            }
            else
            {
                cout<<"S";
            }


        }
        cout<<"\n";

    }


    return 0;
}
