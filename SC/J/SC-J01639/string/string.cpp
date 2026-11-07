#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=4e5+5;
struct Node{
    int a;
    char c;
}a[N],b[N],c[N],c2[N];
int n,tot,cnt,ans;
signed main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    scanf("%lld",&n);
    for(int i=1;i<=n;i++) scanf("%lld %c",&a[i].a,&a[i].c);//,cout<<a[i].a<<" "<<a[i].c;
    a[0].c='A';
    for(int i=1;i<=n;i++){
        if(a[i].c!=a[i-1].c) b[++tot].c=a[i].c;
        b[tot].a+=a[i].a;
    }
    int r=tot,ls=0,l1=0;
    for(int l=1;l<r;){
        // cout<<l<<" "<<r<<" "<<b[l].a<<" "<<b[l].c<<" "<<b[r].a<<" "<<b[r].c<<" "<<l1<<" "<<ls<<endl;
        if(b[l].a-l1<b[r].a-ls){
            c[++cnt]={b[l].a-l1,b[l].c};
            c2[cnt]={b[l].a-l1,b[r].c};
            ls+=b[l].a-l1; l++; l1=0;
        }else if(b[l].a-l1==b[r].a-ls){
            c[++cnt]={b[l].a-l1,b[l].c};
            c2[cnt]={b[l].a-l1,b[r].c};
            r--; ls=0; l++; l1=0;
        }else{
            c[++cnt]={b[r].a-ls,b[l].c};
            c2[cnt]={b[r].a-ls,b[r].c};
            l1+=b[r].a-ls; r--; ls=0;
        }
    }
    // for(int i=1;i<=cnt;i++) cout<<c[i].a<<" "<<c[i].c<<" "<<c2[i].a<<" "<<c2[i].c<<endl;
    for(int i=1;i<=cnt;i++){
        if(c[i].c!=c2[i].c) ans+=c[i].a;
    }
    printf("%lld\n",ans);
    return 0;
}