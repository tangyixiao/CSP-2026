#include<iostream>
using namespace std;
#define N 200001
int n,m,a[N],b[N],as,bs,i,j,ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;as=n;
	for(i=1;i<=n;++i)cin>>a[i];
	for(i=29;i>=0;--i){
		bs=0;ans<<=1;
		for(j=1;j<=as;++j){
			if(a[j]>>i&1)b[++bs]=a[j];
		}if(bs>=m){
			ans|=1;
			swap(a,b);
			as=bs;
		}
	}cout<<ans;
	return 0;
}