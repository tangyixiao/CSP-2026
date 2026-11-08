#include<bits/stdc++.h>
using namespace std;
// #define int long long
signed main(){
    ios::sync_with_stdio(false),cin.tie(0);
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    cout<<(c1==c2);
    if(c1!=c2){
        cout<<"000";
    }
    else{
        cout<<(s1[0]==s2[0]&&s1[1]==s2[1]);
        if(!(s1[0]==s2[0]&&s1[1]==s2[1])){
            cout<<"00";
        }
        else if(s1[2]<='C'){
            if(s2[2]>='D'){
                cout<<"00";
            }
            else{
                cout<<1;
                if(s2[2]==s1[2]-1||s2[2]==s1[2]+1){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
        }
        else{
            if(s2[2]<='C'){
                cout<<"00";
            }
            else{
                cout<<1;
                if(s2[2]==s1[2]-1||s2[2]==s1[2]+1){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
        }
    }
    return 0;
}