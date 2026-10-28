#include<bits/stdc++.h>

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
        int b[n];
        int coun = 1;
        int left = 0;
        int right = n-1;
        bool tr = false;

        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        int c = b[0] + b[n-1];
        for(int i = 0; i<n-1; i++)
        {
            if(b[i]!= b[i+1])
            {
                coun++;
            }
        }
        if(coun>=3)
       {

            cout<<"NO"<<endl;
        }
        else
        {

        while(left < right)
        {
            int c1 = b[left] + b[right];
           // cout<<c1<<endl;
            if(c==c1)
            {
                tr = true;
                left++;
                if (left < right)
                {
                    right--;
                }
            }
            else if(c!=c1)
            {
                tr = false;
                break;
            }
        }
        if(tr)
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
