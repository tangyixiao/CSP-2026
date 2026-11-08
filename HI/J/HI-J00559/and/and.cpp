#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int s[100004];
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	sort(s+1,s+n+1);
	cout<<s[n-m+1];
	return 0;
}
