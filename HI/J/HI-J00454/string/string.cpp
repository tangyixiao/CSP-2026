#include<bits/stdc++.h>
using namespace std;
long long a[200010];
string c[200010];
int main()
{
	freopen("string.in","r", stdin);
	freopen("string.out","w", stdout);
	long long n,l,cnt=0;
	string s="";
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for (int j=1;j<=a[i];j++) s+=c[i];
	}
	l=s.size()-1;
	for (int i=0;i<l/2+1;i++){
		if (s[i]!=s[l-i]){
			s[i]=s[l-i];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
