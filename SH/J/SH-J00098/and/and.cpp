#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200001];
int f[200001][40];
int b[40];
vector<int>s[40];
set<int>c;
int ans = 0;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    scanf("%d%d",&n,&m);
    if(m==1){
        printf("0");
        return 0;
    }
    for(int i = 1;i <= n;i++)
        scanf("%d",&a[i]);
    for(int i = 1;i <= n;i++){
        int x = a[i];
        for(int j = 0;j <= 30;j++){
            f[i][j] = x%2;
            x/=2;
        }
    }
    memset(b,0,sizeof(b));
    for(int j = 0;j <= 30;j++)
        for(int i = 1;i <= n;i++)
            if(f[i][j])
                b[j]++,s[j].push_back(i);
    int z;
    for(int i = 30;i>=0;i--){
        if(b[i]>=m){
            for(auto k:s[i])
                c.insert(k);
            z=i;
            break;
        }
    }
    if(c.size()==0){
        printf("0");
        return 0;
    }
    memset(b,0,sizeof(b));
    for(auto k:c){
        for(int i = 0;i <= 30;i++)
            if(f[k][i]==1){
                b[i]++;
            }
    }
    ans=1<<z;

    for(int i = z-1;i >= 0;i--){
        if(b[i]>=m){
            for(auto k:c){
                if(f[k][i]==0){
                    for(int j = 0;j <= 30;j++)
                        if(f[k][j]==1)
                            b[j]-=f[k][j];
                    c.erase(k);
                }
            }
            ans+=1<<i;
        }
    }
    printf("%d",ans);
    return 0;
}

