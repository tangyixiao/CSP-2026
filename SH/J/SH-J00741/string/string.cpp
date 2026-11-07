#include <bits/stdc++.h>
using namespace std;
#define int long long

int n,m;
int b[200005],a[200015];
char c1[200005],c[200015];
int all,ans;

signed main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    scanf("%lld",&n);
    for(int i=1;i<=n;i++){
        scanf("%lld",&b[i]);
        all+=b[i];
        cin>>c1[i];
    }
    int need=all/2,now=1,use=n,have=0;
    for(int i=1;i<=n;i++){
        if(have+b[i]<=need){
            a[++m]=b[i];
            c[m]=c1[i];
            have+=b[i];
        }
        else{
            if(have>=need){
                if(have==need&&all%2==1){
                    a[++m]=b[i]-1;
                    c[m]=c1[i];
                    have++;
                }
                else{
                    a[++m]=b[i];
                    c[m]=c1[i];
                }
            }
            else{
                if(have+b[i]==need+1&&all%2==1){
                    a[++m]=b[i]-1;
                    c[m]=c1[i];
                    have+=b[i];
                }
                else{
                    a[++m]=need-have;
                    c[m]=c1[i];
                    a[++m]=have+b[i]-need;
                    c[m]=c1[i];
                    if(all%2==1){
                        a[m]--;
                    }
                    have+=b[i];
                }
            }
        }
    }
    use=m;
    while(need>0){
        if(c[now]==c[use]){
            if(a[now]>a[use]){
                a[now]-=a[use];
                need-=a[use];
                use--;
            }
            else if(a[now]==a[use]){
                need-=a[now];
                now++;
                use--;
            }
            else{
                a[use]-=a[now];
                need-=a[now];
                now++;
            }
        }
        else{
            if(a[now]>a[use]){
                a[now]-=a[use];
                need-=a[use];
                ans+=a[use];
                use--;
            }
            else if(a[now]==a[use]){
                need-=a[now];
                ans+=a[use];
                now++;
                use--;
            }
            else{
                a[use]-=a[now];
                need-=a[now];
                ans+=a[now];
                now++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}