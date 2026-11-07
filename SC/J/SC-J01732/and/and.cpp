#include<bits/stdc++.h>
using namespace std;
unsigned long long s[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	} 
	sort(s+1,s+1+n);
	unsigned long long ans;
	ans=s[n]&s[n-1]; 
	for(int i=1;i<m-1;i++){
		ans=ans&s[n-i-1];
	}
	cout<<ans;
	fclose(stdin);
	return 0;
} 