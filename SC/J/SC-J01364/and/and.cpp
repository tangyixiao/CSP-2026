#include<bits/stdc++.h>
using namespace std;
constexpr int maxn=2e5+7;
int n,m,a[maxn];//,f[(int)1e4+7][(int)1e4+7];
bitset<maxn>b[31],c[2];
//void dpSolve(){
//	for(int i=1;i<=n;++i)
//		for(int j=0;j<=min(m,i);++j){
//			f[i][j]=f[i-1][j];
//			if(j)f[i][j]=max(f[i][j],(f[i-1][j-1]!=-1)?(f[i-1][j-1]&a[i]):a[i]);
//		}
//	cout<<f[n][m]<<'\n';
////	for(int i=1;i<=n;++i){
////		for(int j=0;j<=m;++j)
////			cout<<f[i][j]<<' ';cout<<'\n';}
//	return;
//}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;//,f[0][0]=-1;
	for(int i=1;i<=n;++i)
		cin>>a[i];
//	if(n<=1e4&&m<=1e4)return(dpSolve(),0);
	for(int i=30;i>=0;--i){
		int temp=1<<i;
		for(int j=1;j<=n;++j)
			if(temp&a[j])b[i][j]=1;
	}int id=-1;
	for(int i=30;i>=0;--i)
		if(b[i].count()>=m){
			id=i;break;
		}
	if(id==-1)return(cout<<"0\n",0);
	for(int i=1;i<=n;++i)
		if(b[id][i])c[(id+1)&1][i]=1;
	for(int i=id-1;i>=0;--i){
		int num=0;
		for(int j=1;j<=n;++j)
			if(c[i&1][j]&&b[i][j])++num,c[(i+1)&1][j]=1;
			else c[(i+1)&1][j]=0;
		if(num==m){
			int ans=(1<<30)-1;
			for(int j=1;j<=n;++j)
				if(c[(i+1)&1][j])ans&=a[j];
			return(cout<<ans<<'\n',0);
		}else if(num<m)
			for(int j=1;j<=n;++j)c[(i+1)&1][j]=c[i&1][j];
	}int ans=(1<<30)-1;
	for(int j=1;j<=n;++j)
		if(c[1][j])ans&=a[j];
	return(cout<<int(ans==((1<<30)-1)?0:ans)<<'\n',0);
}