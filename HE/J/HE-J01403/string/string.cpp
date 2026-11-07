#include<bits/stdc++.h>
using namespace std;
long long n,a,ans;
char c;
string s1,s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int i=1;i<=a;i++)s1+=c;
	}
	long long len=s1.size();
	for(int i=0;i<len/2;i++)s2[i]=s1[len-i-1];
	for(int i=0;i<len/2;i++){
		if(s1[i]!=s2[i])ans++;
	}
	cout<<ans<<endl;
	return 0;
}
