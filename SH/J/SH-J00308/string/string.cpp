#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N=1e6+5;

struct k{
    ll le,ty;
};

ll n,m,t,len,su,l,r,ans;
k a[N],b[N],c[N];
char x;
k u,v;

int main(){
    ios::sync_with_stdio(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].le>>x;
        a[i].ty=x-'a';  len+=a[i].le;
    }
    su=len/2;
    for(int i=1;i<=n;i++){
        if(su>0){
            if(a[i].le>=su){
                l++;    b[l]={su,a[i].ty};
                a[i].le-=su;    su=0;
                if(len&1){
                    if(a[i].le) a[i].le--;
                    else    a[i+1].le--;
                }
                if(a[i].le){
                    r++;    c[r]=a[i];
                }
            }else{
                l++;    b[l]=a[i];
                su-=a[i].le;
            }
        }else{
            if(a[i].le) c[++r]=a[i];
        }
    }
    reverse(b+1,b+1+l);
    u=b[l]; v=c[r];
    while(l||r){
        if(l<-1||r<-1)  return 0;
        if(u.le>v.le){
            if(u.ty!=v.ty)  ans+=v.le;
            u.le-=v.le; r--;    v=c[r];
        }else{
            if(u.ty!=v.ty)  ans+=u.le;
            v.le-=u.le; l--;    u=b[l];
        }
        while(l&&!u.le){
            l--;    u=b[l];
        }
        while(r&&!v.le){
            r--;    v=c[r];
        }
    }
    cout<<ans<<"\n";

    return 0;
}
