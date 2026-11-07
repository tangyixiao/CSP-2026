#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n;
int a[N];
char c[N];
long long ans=0;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>c[i];
    }
    int head=1;
    int tail=n;
    while(head<tail){
        if(c[head]==c[tail]){
            int x=min(a[head],a[tail]);
            a[head]-=x;
            a[tail]-=x;
            if(a[head]<=0)head++;
            if(a[tail]<=0)tail--;
        }
        else{
            int x=min(a[head],a[tail]);
            ans+=x;
            a[head]-=x;
            a[tail]-=x;
            if(a[head]<=0)head++;
            if(a[tail]<=0)tail--;
        }
    }
    cout<<ans<<'\n';
    return 0;
}