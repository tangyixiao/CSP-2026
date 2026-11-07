#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string n1;cin>>n1;
    string n2;cin>>n2;
    string s1;cin>>s1;
    string s2;cin>>s2;
    if(n1==s1){
        cout<<1;
        if(n2[0]==s2[0]&&n2[1]==n2[1]){
            cout<<1;

            if(n2[2]<='C'&&s2[2]<='C'||n2[2]>='D'&&s2[2]>='D'){
                cout<<1;

                if(n2[2]-s2[2]==-1||n2[2]-s2[2]==1) cout<<1;
                else cout<<0;

            }
            else cout<<00;

        }
        else cout<<000;
    }
    else cout<<0000;

    return 0;

}


