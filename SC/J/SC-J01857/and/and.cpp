#include<bits/stdc++.h>
using namespace std;int ans=0;int m,n;
int vis[200001];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int ans=(n+1)/2-1;
	cout<<a[ans];
	return 0;
}