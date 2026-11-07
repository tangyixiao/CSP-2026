#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,t,cc;
struct fl{
	int z;
	int d;
}a[200005];
bool b[200005][35];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].z;
		cc=a[i].z;
		while(cc>0){
			t++;
			b[i][t]=cc%2;
			cc/=2;
		}
		a[i].d=t;
		for(int k=1,j=t;k<j;k++,j--) swap(b[i][k],b[i][j]);
	}
}