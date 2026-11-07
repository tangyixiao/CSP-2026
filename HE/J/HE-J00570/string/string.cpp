#include <bits/stdc++.h>
#define int long long
#define unsigned ull long long
using namespace std;
int n,a[200005];
string s,s1;
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	int ac;
	for(int sum=0,i=1;ac=1;i++,sum++){
		for(int i=1,j=n;i<=n,j>=1;i++,j--){
			s1[i]=s[j];
		}
		if(s==s1){
			cout<<sum;
			ac=1;
			return 0;
		}
	}
	cout<<0 
	return 0;
} 
