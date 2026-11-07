#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],cnt=0;
char c[200010];
string s,z;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	long long len=s.size();
	for(int i=0;i<len/2;i++){
		z[i]=s[len-i-1];
	}
	for(int i=0;i<len/2;i++){
		if(z[i]!=s[i]){
			cnt++;
		}
	}
	if(n<=1){
		cout<<0;
		return 0;
	}
	cout<<cnt;
	return 0;
}
