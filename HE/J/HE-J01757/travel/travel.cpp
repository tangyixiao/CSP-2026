#include <bits/stdc++.h>
using namespace std;
struct node()
{
    int che;
    char lie[3];
};
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("travel1.in",r,stdin);
    freopen("travel.out",w,stdout);
    node hk416,hk417;
    cin>>hk416.che>>hk416.hang>>hk417.che>>hk417.hang;
    if(hk416.che==hk417.che)
    {
        cout<<"1";
        if(hk416.hang[0]==hk417.hang[0] && hk416.hang[1]==hk417.hang[1])
        {

            cout<<"1";
            if(hk416.hang[2]>'C'&& hk417.hang[2]>'C' || hk416.hang[2]<='C'&& hk417.hang[2]<='C')
            {
                cout<<"1";
                if(hk416.hang[2]-hk417.hang[2]==1 || hk417.hang[2]-hk416[2]==1)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
            }
            else
            {
                cout<<"0";
            }
        }
    }
    else
    {
        cout<<"0";
    }
    fclose("travel1.in");
    fclose("travel.out");
    return 0;
}
