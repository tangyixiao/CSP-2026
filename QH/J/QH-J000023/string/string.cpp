#include <bits/stdc++.h>
using namespace std;
int a[1000010];
char b[1000010];
string s,s1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s+=b[i];
		}
	}
	for(int i=n;i>=1;i--){
		for(int j=1;j<=n;j++){
			s1[j]=s[i];
		}
	}
	long long ans=0;
	for(int i=1;i<=n;i++){
		if(s1[i]!=s[i]){
			s1[i]=s[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
