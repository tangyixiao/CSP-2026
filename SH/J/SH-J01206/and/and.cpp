/*#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct yuansu{
    ll s,v;
};
ll n,m;
ll a[200005];
yuansu dp[200005];
ll maxx=-1;
int main(){
    freopen("and4.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        //dp[i].v=a[i];
        dp[i].s=1;
    }
    dp[1].v=a[1];
    dp[1].s=1;
    for(int i=2;i<=n;i++){
        //cout<<1;
        for(int j=1;j<i;j++){
            //cout<<2;
            if(dp[j].s+1<=m){
                //cout<<3;
                if((dp[j].v&a[i])>=dp[i].v){
                    //cout<<4;
                    dp[i].v=(dp[j].v&a[i]);
                    //cout<<5;
                    dp[i].s=dp[j].s+1;
                    //cout<<6;
                    if(dp[i].s==m){
                        maxx=max(maxx,dp[i].v);
                        //cout<<7;
                    }
                }
            }
        }
        if(dp[i].v==0){
            dp[i].v=a[i];
            //cout<<8;
        }
    }
    cout<<maxx;
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int a[200005];
int s[200005];
int maxx;
int ans;
void dosth(int x,int w){
    if(x-1==m){
        int ans=s[1];
        for(int i=2;i<=m;i++){
            ans&=s[i];
        }
        /*for(int i=1;i<=m;i++){
            cout<<s[i]<<' ';
        }*/
        maxx=max(maxx,ans);
        //cout<<ans<<' '<<maxx<<endl;
        return;
    }
    for(int i=w+1;i<=n;i++){
        s[x]=a[i];
        dosth(x+1,i);

    }
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    if(m==n-1){
        bool flag=0;
        for(int i=1;i<=n;i++){
            flag=0;
            ans=0;
            for(int j=1;j<=n;j++){
                if(j!=i){
                    if(!flag){
                        ans=a[j];
                        flag=1;
                    }else{
                        ans&=a[j];
                    }
                }
            }
            maxx=max(maxx,ans);
        }
        cout<<maxx;
        return 0;
    }
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    dosth(1,0);
    cout<<maxx;
    return 0;
}

