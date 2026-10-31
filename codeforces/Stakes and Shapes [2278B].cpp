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
                cout<<"R"<<endl;
            }
            else if(r >= s)
            {
                cout<<"P"<<endl;
            }
            else
            {
                cout<<"S"<<endl;
            }


        }

    }


    return 0;
}
