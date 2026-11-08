#include <bits/stdc++.h>
using namespace std;
long long n,a,ans;
string c,s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	long long len=s.size();
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
