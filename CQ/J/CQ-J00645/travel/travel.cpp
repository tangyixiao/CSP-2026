#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a[10]={1,2,3,4,0,5};
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2){
        cout<<1;
        if(s1[0]+s1[1] == s2[0]+s2[1]){
            cout<<1;
            if(s1[2]=='A' || s1[2]=='B' || s1[2]=='C')
                if(s2[2]=='A' || s2[2]=='B' || s2[2]=='C'){
                    cout<<1;
                    if(abs(a[s1[2]-'A']-a[s2[2]-'A'])==1)cout<<1;
                    else cout<<0;
                }
                else cout<<"00";
            else if(s2[2]=='D' || s2[2]=='F')
                if(s1[2]=='D' || s1[2]=='F'){
                    cout<<1;
                    if(abs(a[s1[2]-'A']-a[s2[2]-'A'])==1)cout<<1;
                    else cout<<0;
                }
                else cout<<"00";
        }
        else cout<<"000";
    }
    else cout<<"0000";
    cout<<"\n";
    return 0;
}
