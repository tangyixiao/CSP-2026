#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[2000005];
int f[2000005];
int u[2000005];
void slove(){
    int n,d;
    cin>>n>>d;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            memset(f,0x3f,sizeof(f));
            f[i]=0;
            for(int k=i;k<=j;k++){
                for(int e=k+1;e<=j;e++){
                    if(a[e]-a[k]<=d){
                        f[e]=min(f[e],f[k]+1);
                    }
                }
            }
            memset(u,0,sizeof(u));
            for(int k=i;k<=j;k++){
                for(int e=k+1;e<=j;e++){
                    if(a[e]-a[k]<=d){
                        if(f[e]==f[k]+1){
                            u[e]++;
                        }
                    }
                }
            }
            if(u[j]==2){
            	sum++;
			}
        }
        //cout<<endl<<endl;
    }
    cout<<sum<<endl;
}
signed main(){
	freopen("migrate.in", "r", stdin);
	freopen("migrate.out", "w", stdout);
    int c,t;
    cin>>c>>t;
    while(t--){
        slove();
    }
    return 0;
}
/*
0 2
5 3
-2 -1 0 1 2
6 2
-4 -3 -2 -1 3 6

*/
 
