#include<bits/stdc++.h>
using namespace std;
int a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,greater<int>());
	int maxn=INT_MIN;
	for(int i=1;i+m<=n;i++){
		int sum=a[i];
		for(int j=i;j<i+m;j++) sum=sum&a[j];
		maxn=max(sum,maxn);
	}
	cout<<maxn;
	return 0;
}
