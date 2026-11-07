#include<bits/stdc++.h>
using namespace std;
int n,m,maxn;
vector<int> a;
void dfs(int l,int c,int num){//已选到l，还有c个
	if(c<=0) {maxn=max(maxn,num);}
//	if(c<(n-l)) return;
	for(int i=l+1;i<=n;i++) {
//		cout<<i<<" "<<c-1<<" "<<(num&a[i])<<endl;
		dfs(i,c-1,(num&a[i]));
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool b1=false;
	if(m==1) b1=true;
	a.push_back(0);
	for(int i=1;i<=n;i++) {
		int x;
		cin>>x;
		if(b1) maxn=max(maxn,x);
		a.push_back(x);
	}
	if(b1) {cout<<maxn;return 0;}
	for(int i=1;i<=n/2;i++) {
		dfs(i,m-1,a[i]);
	}
	cout<<maxn<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}