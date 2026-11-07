#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N=5e5+5,M=35;

ll n,m,t,ans;
ll a[N],b[M][N],r[M];

int main(){
	ios::sync_with_stdio(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];  b[31][i]=a[i];
    }
    r[31]=n;
	for(int i=31;i>=0;i--){
        ll fl=0;
        for(int j=1;j<=r[i+1];j++){
            if(b[i+1][j]&(1<<i))    fl++;
        }
        if(fl>=m){
            ans+=(1<<i);
            for(int j=1;j<=r[i+1];j++){
                if(b[i+1][j]&(1<<i))    b[i][++r[i]]=b[i+1][j];
            }
        }else{
            for(int j=1;j<=r[i+1];j++){
                b[i][++r[i]]=b[i+1][j];
            }
        }
    }
	cout<<ans;
	
	
	
	return 0;
}