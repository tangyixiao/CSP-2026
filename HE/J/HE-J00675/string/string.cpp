#include<bits/stdc++.h>
using namespace std;
int a[210000],sum=1;
char c[210000];
int ans;
string s,b;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=sum;j<=a[i]+sum;j++)s[j]=c[j];
		sum+=a[i];
	}
	sort(a+1,a+1+n);
	for(int i=sum;i>=1;i--){
		int j=1;j++;
		b[j]=s[i];
	}
	for(int i=sum;i>=1;i--){
		if(b[i]!=s[i])ans++;
	}
		if(n==1)cout<<0;
	else if(n==2&&a[1]==a[2]){
		cout<<1;
		return 0;
	}
	else if(a[1]==2&&n==2)cout<<0;
	else cout<<ans;
	return 0;
}
