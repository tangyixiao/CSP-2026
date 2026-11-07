#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll a[2000500];
ll id[2000500];
char c[2000500];
ll cnt=0;
ll sum=0;
int main(){

    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);

    cin>>n;
    id[1]=1;
    for(ll i=1;i<=n;i++){
        cin>>a[i]>>c[i];
        sum+=a[i];
        id[i+1]=a[i]+1;
    }
    ll j=n,now=1;

    while(now<j){
        if(c[now]!=c[j]){
            if(a[now]>a[j]){
                a[now]=a[now]-a[j];
                cnt+=a[j];
                a[j]=0;
                j--;
            }else if(a[now]<a[j]){
                a[j]=a[j]-a[now];
                cnt+=a[now];
                a[now]=0;
                now++;
            }else{
                cnt+=a[j];
                a[now]=0;
                a[j]=0;
                now++;
                j--;
            }
        }else{
            if(a[now]>a[j]){
                a[now]=a[now]-a[j];
                a[j]=0;
                j--;
            }else if(a[now]<a[j]){
                a[j]=a[j]-a[now];
                a[now]=0;
                now++;
            }else{
                a[now]=0;
                a[j]=0;
                now++;
                j--;
            }
        }
    }
    cout<<cnt;
    return 0;
}
