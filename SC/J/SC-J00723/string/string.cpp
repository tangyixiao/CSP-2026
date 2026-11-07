#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,a[N],l,r,L,R,m,ans;
char c[N];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>c[i];
        m+=a[i];
    }
    // cout<<m<<"\n";
    L=1,R=m;
    l=1,r=n;
    long long suml=0,sumr=0;
    while(L<=R){
        // cout<<l<<" "<<r<<" "<<L<<" "<<R<<" "<<ans<<"\n";
        if(suml+a[l]-L<R-(m+1ll-a[r]-sumr)){
            if(c[l]!=c[r]){
                ans+=suml+a[l]-L+1ll;
            }
            R=R-(a[l]+suml-L+1ll);
            L=a[l]+suml+1ll;
            l++;
            suml+=a[l-1];
        }else if(suml+a[l]-L>R-(m+1ll-a[r]-sumr)){
            if(c[l]!=c[r]){
                ans+=R-(m+1ll-a[r]-sumr)+1ll;
            }
            L=L+(R-(m+1ll-a[r]-sumr)+1ll);
            R=(m+1ll-a[r]-sumr)-1ll;
            r--;
            sumr+=a[r+1];
        }else{
            if(c[l]!=c[r]){
                ans+=R-(m+1ll-a[r]-sumr)+1ll;
            }
            L=L+(R-(m+1ll-a[r]-sumr)+1ll);
            R=(m+1ll-a[r]-sumr)-1ll;
            r--;
            l++;
            sumr+=a[r+1];
            suml+=a[l-1];
        }
    }
    cout<<ans;
    return 0;
}