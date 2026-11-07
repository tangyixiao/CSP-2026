#include <bits/stdc++.h>
using namespace std;
string aa,ab,bb,ba;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>aa>>ab>>bb>>ba;
    if(aa[0]==bb[0]&&aa[1]==bb[1])
    {
        cout<<"1";
        if(ab[0]==ba[0]&&ab[1]==ba[1])
        {
            cout<<"1";
            if((ab[2]<='C')==(ba[2]<='C'))
            {
                cout<<"1";
                if(abs(ab[2]-ba[2])==1)
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
                cout<<"00";
            }
        }
        else
        {

            cout<<"000";
        }
    }
    else
    {
        cout<<"0000";
    }
}
