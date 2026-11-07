#include<bits/stdc++.h>
using namespace std;
int x[1000001],sum,ans=0;
char a[1000001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>x[i]>>a[i];
		sum+=x[i];
	}
	string s;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=x[i];j++) s[ans+j]=a[i];
		ans+=x[i];
	}
	ans=0;
	for(int i=1;i<=sum/2;i++){
		if(s[i]!=s[sum-i]) {
			ans++;
			s[sum+1-i]=s[i];
		}
	}
	cout<<ans;
	return 0;
}
