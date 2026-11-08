#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

    int rn,xn;
    char rn1,rn2,rch;
    char xn1,xn2,xch;

    cin>>rn;
    cin>>rn1>>rn2>>rch;
    cin>>xn;
    cin>>xn1>>xn2>>xch;

    int rp=(rn1-'0')*10+(rn2-'0');
    int xp=(xn1-'0')*10+(xn2-'0');

    bool rb=(rch-'A')<3;
    bool xb=(xch-'A')<3;

    if(rn==xn){
        cout<<"1";
        if(rp==xp){
            cout<<"1";
            if(rb==xb){
                cout<<"1";
                if(abs((rch-'A')-(xch-'A'))<2)
                    cout<<"1";
                else
                    cout<<"0";
            }
            else
                cout<<"00";
        }
        else
            cout<<"000";
    }
    else
        cout<<"0000";

    return 0;
}