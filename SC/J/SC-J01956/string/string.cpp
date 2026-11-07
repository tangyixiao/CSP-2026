#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int a[N],c[N];
signed main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;scanf("%lld",&n);
    for(int i=1;i<=n;i++){
        string s;
        cin>>a[i]>>s;
        c[i]=s[0]-'a';
    }
    int j=n,k=a[n],cnt=0;
    for(int i=1;i<=n;i++){
        int x=a[i];
        while(x!=0){
            int p=min(k,x);
            if(c[j]!=c[i]) cnt+=p;
            k-=p,x-=p;
            if(k==0) k=a[--j];
        }
    }
    printf("%lld\n",cnt/2);
    return 0;
}