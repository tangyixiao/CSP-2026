#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],cnt;
char c[200010];
string s,s1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(long long j=1;j<=a[i];j++) s+=c[i];
	}
	for(int i=s.size()-1;i>=0;i--) s1+=s[i];
	for(long long i=0;i<s1.size();i++){
		if(s[i]!=s1[i]) cnt++;
	}
	cout<<cnt/2;
	return 0;
}