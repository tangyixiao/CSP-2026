#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n;cin>>n;
	vector<int> a(n+1);
	vector<char> c(n+1);
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
	}
	long long ans = 0;
	for(int i=1,j=n;i<=n&&j>=1&&i<j;){
		int x = min(a[i],a[j]);
		if(c[i]!=c[j]){
			ans+=x;
		}
		a[i]-=x;
		a[j]-=x;
		if(a[i]==0) i++;
		if(a[j]==0) j--;
	}
	cout<<ans;
	return 0;
}