#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200010],sum=0,l=0;
string b[200010],s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	s="";
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		l+=a[i];
		for(int j=1;j<=a[i];j++){
			s+=b[i];
		}
	}
	l--;
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-i])sum++;
	}
	cout<<sum;
	return 0;
}