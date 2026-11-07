#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    string c1,c2,s1,s2;
    cin>>c1>>s1>>c2>>s2;
    if(c1!=c2) cout<<"0000";
    else{
        cout<<"1";
        if(s1[0]!=s2[0] || s1[1]!=s2[1]) cout<<"000";
        else{
            cout<<"1";
            int st1=s1[2]-'A'+1;
            int st2=s2[2]-'A'+1;
            if(st1<=3 && st2>=4 || st1>=4 && st2<=3) cout<<"00";
            else{
                cout<<"1";
                if(abs(st1-st2)!=1) cout<<"0";
                else cout<<"1";
            }
        }
    }
    return 0;
}
