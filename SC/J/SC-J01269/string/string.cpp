#include<bits/stdc++.h>
const int N=2e5+11;
using namespace std;
int n;
long long a[N];
char c[N];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i <= n;i++){
        cin>>a[i]>>c[i];
    }
    int j=n+1;
    long long cnt=0,cnt2=0;
    long long ans=0;
    for(int i=1;i < j;i++){
        long long rst=cnt-cnt2;
        if(c[i]!=c[j]){
            if(cnt2+a[i]<=cnt) ans+=a[i];
            else ans+=rst;
        }
        cnt2+=a[i];
        while(j>i&&cnt<cnt2){
            cnt+=a[--j];
            if(c[i]!=c[j]){
                if(cnt<cnt2){
                    ans+=a[j];
                }else{
                    ans+=a[j]-(cnt-cnt2);
                }
            }
        }
    }
    cout<<ans;
    return 0;
}