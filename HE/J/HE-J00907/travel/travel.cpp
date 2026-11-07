#include <bits/stdc++.h>
using namespace std;
int main(){

    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int ans=0;
    string c1,c2,s1,s2;
    cin>>c1>>c2>>s1>>s2;
    if(c1== c2){
        ans+=1;
    }else ans+=0;
    cout << ans;
    return 0;
    }
