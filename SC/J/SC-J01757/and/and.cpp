#include<bits/stdc++.h>
using namespace std;
int a[200005];
vector<int> b[200005];
void two(int n,int i){
	if(n==0) return;
	b[i].push_back(n%2);
	two(n/2,i);
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxn=0;
	long long ans=0;
	bool flag=1;
	cin>>n>>m;
	int c[200005];
	for(int i=1;i<=n;i++){
		c[i]=1;
		cin>>a[i];
		if(a[i]>a[maxn]) maxn=i;
		two(a[i],i);
	}
	for(int i=1;i<=n;i++){
		int x=b[maxn].size()-b[i].size();
		for(int j=1;j<=x;j++){
			b[i].push_back(0);
		}
	}
	for(int i=b[maxn].size()-1;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(b[j][i]==1 && c[j]==1) cnt++;
		}
		if(cnt<m) continue;
		for(int j=1;j<=n;j++){
			if(b[j][i]==0 && c[j]==1) c[j]=0;
		}
		ans+=pow(2,i);
	}
	cout<<ans;
	return 0;
}