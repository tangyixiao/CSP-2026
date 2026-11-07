#include<bits/stdc++.h>
using namespace std;
int a[200010],n,ans;char c[200010];
int l;string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	for(int i=1,j=1;i<=n;i++){
		int g=j;
		for(;j<g+a[i];j++){
			s[j]=c[i];l++;
		}
	}int j=l;
	for(int i=1;i<=l/2;i++){
		if(s[i]!=s[j])ans++;
		j--;
	}cout<<ans;
	return 0;
}
