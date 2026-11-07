#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll cnt,cnt2,n,a;
char c,huiwen[2125000000];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    cnt=0;
    while(n--){
        cin>>a>>c;
        ll tnt=cnt;
        for(cnt;cnt<tnt+a;cnt++){
            huiwen[cnt]=c;
        }
    }
    string huiwen2=huiwen;
    for(ll i=0;i<=(huiwen2.size())/2;i++){
        if(huiwen[i]!=huiwen2[huiwen2.size()-i-1]){
            cnt2++;
        }
    }
    cout<<cnt2;
    return 0;
}
