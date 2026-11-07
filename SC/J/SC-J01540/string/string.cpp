#include<bits/stdc++.h>
using namespace std;
int a[200010];
char b[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >>n;
	string s=" ";
	long long cnt=0;
	for(int i=1;i<=n;i++){
		cin >>a[i]>>b[i];
		for(int j=1;j<=a[i];j++){
			s+=b[i];
		}
		cnt+=a[i];
	}
	long long ans=0;
	for(int i=1;i<=cnt/2;i++){
		if(s[i]!=s[cnt-i+1])ans++;
	}
	cout <<ans;
	return 0;
} 