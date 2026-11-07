#include<bits/stdc++.h>
using namespace std;
int n;
long long ans,l;
string s;
int a[200010];
char c[200010];
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int j=1;j<=n;j++){
		cin>>a[j]>>c[j];
		for(int i=1;i<=a[j];i++)s+=c[j];
		l+=a[j];
	}
	for(long long i=0;i<l;i+=2){
		if(s[i]!=s[l-1-i])ans++;
	}
	cout<<ans;
	return 0;
} 
