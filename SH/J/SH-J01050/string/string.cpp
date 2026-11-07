#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,ans;
struct node{
    ll num;
    char c;
}a[200005];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    scanf("%lld",&n);
    for(ll i=1;i<=n;i++){
        ll m;
        char c1;
        scanf("%lld%c",&m,&c1);
        a[i].num=m;
        a[i].c=c1;
    }
    ll i=1,j=n;
    char cl=a[i].c,cr=a[j].c;
    ll nl=a[i].num,nr=a[j].num;
    while(i<j){
        ll del=min(nl,nr);
        if(!(cl==cr)){
            ans+=del;
        }
        nl-=del;
        nr-=del;
        if(nl==0){
            i++;
            cl=a[i].c;
            nl=a[i].num;
        }
        if(nr==0){
            j--;
            cr=a[j].c;
            nr=a[j].num;
        }
    }
    printf("%lld\n",ans);
    fclose(stdin);
    fclose(stdout);
    return 0;
}
