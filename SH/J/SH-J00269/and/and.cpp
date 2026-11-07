#include<bits/stdc++.h>
using namespace std;
int n,m,c;//b记录ai中权重为1的个数 
struct node{
	int ai,b;
}a[200010];
bool cmp(node x,node y){
	if(x.b!=y.b) return x.b>y.b;
	if(x.ai!=y.ai) return x.ai>y.ai;
}
bool cmp2(node x,node y){
	if(x.ai!=y.ai) return x.ai>y.ai;
	if(x.b!=y.b) return x.b>y.b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].ai;
		c=a[i].ai;
		while(c){
			if(c&1) a[i].b++;//ai这一位权重为1 
			c>>=1;
		}
	}
	if(m>=3) sort(a+1,a+1+n,cmp2);//把a里面的数按照权重为1的数目和原数字大小排序 
	else sort(a+1,a+1+n,cmp);
	int ans=a[1].ai;
	for(int i=2;i<=m;i++){
		ans&=a[i].ai;
	}
	cout<<ans;
	return 0;
}
