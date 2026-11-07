#include<bits/stdc++.h>
using namespace std;
int a[200010];
vector<int> b[40];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,k,ans=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=30;i>=0;i--){
		for(int j=1;j<=n;j++)if(a[j]&(1<<i))b[i].push_back(a[j]);
		if(b[i].size()>=k){
			ans+=(1<<i);
			for(int j=0;j<b[i].size();j++)a[j+1]=b[i][j];
			n=b[i].size();
		}
	}
	cout<<ans;
	return 0;
}
