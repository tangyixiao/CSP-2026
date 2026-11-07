#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[20005],ans=1;string s[200005];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>s[i];
	}
	for(int i=1;i<n;i++){
	if(a[i]==a[i+1])
		ans++;
	}
	if(ans==n-1)
		cout<<0;
	return 0;
}
