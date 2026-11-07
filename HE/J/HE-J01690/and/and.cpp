#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans=-1,f[1200][200005];
bool cmp(int x,int y){return x>y;}
bool check(int x){
	int t=x;
	while(t){
		if(t&(-t)==0)return 0;
		t&=(t-1);
	}
	return 1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	bool ff=1;
	for(int i=1;i<=m;i++)if(!check(a[i])){
		ff=0;
		break;
	}if(ff){
		cout<<a[m];
		return 0;
	}
	for(int i=1;i<=m;i++)for(int j=i;j<=n;j++){
		if(i==1)f[i][j]=a[i];
		else for(int k=j-1;k>0;k--){
			f[i][j]=max(f[i][j],f[i-1][k]&a[i]);
		}
	}cout<<f[m][n];
	return 0;
}
