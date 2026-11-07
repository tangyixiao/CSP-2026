/*
#include<bits/stdc++.h>
using namespace std;
const int MAXN=200005;
int n,m,ans,a[MAXN];

void dfs(int depth,int idx,int res){
    if(depth==m){
        ans=max(ans,res);
        return;
    }
    for(int i=idx+1;i<=n;++i){
        dfs(depth+1,i,res&a[i]);
    }
}

int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;++i){
        dfs(1,i,a[i]);
    }
    cout<<ans<<"\n";
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
const int MAXN=200005;
int n,m,a[MAXN];
bool bit[MAXN][32],ans[32];

void convert(int idx,int x){
    int i=31;
    while (x>0){
        bit[idx][i]=bool(x%2);
        x=x/2;
        --i;
    }
}

int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;++i){
        convert(i,a[i]);
    }
    /*
    for(int i=0;i<n;++i){
        for(int j=1;j<=31;++j){
            cout<<bit[i][j];
        }
        cout<<endl;
    }
    */
    int rank=0;
    for(int i=1;i<=31;++i){
        int cnt=0;
        bool flag=false;
        for(int j=n-1;j>rank;--j){
            if(bit[j][i]){
                ++cnt;
                flag=true;
            }else if(flag&&cnt>=m){
                rank=j;
            }
        }
        if(cnt>=m){
            //cout<<"rank: "<<rank<<endl;
            ans[i]=true;
        }
    }

    int res=0;
    for(int i=1;i<=31;++i){
        if(ans[i]){
            res+=(1<<(31-i));
        }
    }
    cout<<res<<"\n";
    return 0;
}