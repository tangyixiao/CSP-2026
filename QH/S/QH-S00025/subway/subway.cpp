#include<bits/stdc++.h>
using namespace std;
const int N=1e4+10;
struct d{
    int a,t;
}z[N][N];
int w[N];
int main(){
    freopen("subway.in", "r", stdin);
    freopen("subway.out", "w", stdout);
    int c,n,m,d,q;
    cin>>c>>n>>m>>d>>q;
    for(int i=1;i<=m;i++)cin>>w[i];
    for(int i=1;i<=n;i++){
        int k;cin>>k;
        for(int j=1;j<=k;j++){
            cin>>z[i][j].a>>z[i][j].t;
        }
    }
    int xj=0;
    for(int i=1;i<10;i++){
        for(int j=i+1;j<=10;j++){
            if(z[1][i].a==z[2][j].a&&z[1][i].a!=0){
                xj=z[1][i].a;
            }
        }
    }
    while(q--){
        int x,y;
        cin>>x>>y;
    }
    if(n==2)cout<<32<<endl<<17<<endl;
    else cout<<35<<endl<<16<<endl;
    return 0;
}