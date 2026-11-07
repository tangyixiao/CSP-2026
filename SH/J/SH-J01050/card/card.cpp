#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll Maxn=500005;
ll n,m;
ll a[Maxn],ans[Maxn],add[Maxn];
bool vis[Maxn];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    if(m==2){
        int m1=a[n],m2=a[n-1],m3=a[n-2];
        if(m1==m2){
            if(m1==2){
                cout<<0<<' '<<n<<'\n';
            }else{
                cout<<n<<' '<<0<<'\n';
            }
        }else if(m1==m3){
            if(m1==2){
                cout<<1<<' '<<n<<'\n';
            }else{
                cout<<n<<' '<<1<<'\n';
            }
        }else{
            if(m1==2){
                cout<<n-1<<' '<<n<<'\n';
            }else{
                cout<<n<<' '<<n-1<<'\n';
            }
        }
    }else if(m==1){
        cout<<n<<'\n';
    }else{
        for(int i=1;i<=n;i++){
            int len=0;
            for(int j=i;j<=n;j++){
                if(vis[a[j]]==true){
                    for(int k=1;k<=len;k++){
                        vis[add[k]]=false;
                        add[k]=0;
                    }
                    len=0;
                }
                len++;
                add[len]=a[j];
                vis[a[j]]=true;
            }
            for(int j=1;j<=len;j++){
                ans[add[j]]++;
                vis[add[j]]=false;
                add[j]=0;
            }
        }
        for(int i=1;i<=m;i++){
            cout<<ans[i]<<' ';
        }
        cout<<'\n';
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
