#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005][65],b[200005];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >> n >> m;
    for(int i=1,x,pos=30;i<=n;i++){
        cin >> b[i],x=b[i];
        while(x){
            a[i][++pos]=x%2;
            x/=2;
        }
        for(int j=pos,cnt=0;j>=31;j--){
            a[i][++cnt]=a[i][j];
        }
    }
    if(m==1){
        int maxn=-1e9;
        for(int i=1;i<=n;i++){
            maxn=max(maxn,b[i]);
        }
        cout << maxn;
    }
    else if(m==n){
        int c[35]={},ans=0;
        for(int i=1;i<=30;i++){
            c[i]=a[1][i];
        }
        for(int i=2;i<=n;i++){
            for(int i=1;i<=30;i++){
                if(c[i]==0||a[i]==0) c[i]=0;
                else c[i]=1;
            }
        }
        for(int i=1;i<=30;i++){
            int mul=c[i];
            for(int j=1;j<=i;j++){
                mul*=2;
            }
            ans+=mul;
        }
        cout << ans;
    }
    else if(m==2){
        int c[35]={},maxn=-1e9;
        for(int i=1;i<=n;i++){
            for(int j=1,ans=0;j<=n;j++){
                for(int k=1;k<=30;k++){
                    if(a[i][k]==0||a[j][k]==0) c[i]=0;
                    else c[i]=1;
                }
                for(int k=1;k<=30;k++){
                    int mul=c[i];
                    for(int u=1;u<=k;u++){
                        mul*=2;
                    }
                    ans+=mul;
                }
                maxn=max(maxn,ans);
            }
        }
        cout << maxn;
    }
    else if(m==3){
        int c[35]={},maxn=-1e9;
        for(int i=1;i<=n;i++){
            for(int v=1;v<=n;v++){
                for(int j=1,ans=0;j<=n;j++){
                    for(int k=1;k<=30;k++){
                        if(a[i][k]==0||a[j][k]==0||a[v][k]==0) c[i]=0;
                        else c[i]=1;
                    }
                    for(int k=1;k<=30;k++){
                        int mul=c[i];
                        for(int u=1;u<=k;u++){
                            mul*=2;
                        }
                        ans+=mul;
                    }
                    maxn=max(maxn,ans);
                }

            }
        }
        cout << maxn;
    }
    else if(m==4){
        int c[35]={},maxn=-1e9;
        for(int i=1;i<=n;i++){
            for(int v=1;v<=n;v++){
                for(int y=1;y<=n;y++){
                    for(int j=1,ans=0;j<=n;j++){
                        for(int k=1;k<=30;k++){
                            if(a[i][k]==0||a[j][k]==0||a[v][k]==0||a[y][k]==0) c[i]=0;
                            else c[i]=1;
                        }
                        for(int k=1;k<=30;k++){
                            int mul=c[i];
                            for(int u=1;u<=k;u++){
                                mul*=2;
                            }
                            ans+=mul;
                        }
                        maxn=max(maxn,ans);
                    }
                }

            }
        }
        cout << maxn;
    }
    else if(m==5){
        int c[35]={},maxn=-1e9;
        for(int i=1;i<=n;i++){
            for(int v=1;v<=n;v++){
                for(int l=1;l<=n;l++){
                    for(int y=1;y<=n;y++){
                        for(int j=1,ans=0;j<=n;j++){
                            for(int k=1;k<=30;k++){
                                if(a[i][k]==0||a[j][k]==0||a[v][k]==0||a[y][k]==0) c[i]=0;
                                else c[i]=1;
                            }
                            for(int k=1;k<=30;k++){
                                int mul=c[i];
                                for(int u=1;u<=k;u++){
                                    mul*=2;
                                }
                                ans+=mul;
                            }
                            maxn=max(maxn,ans);
                        }
                    }
                }

            }
        }
        cout << maxn;
    }
    return 0;
}
