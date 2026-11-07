#include<bits/stdc++.h>
using namespace std;
long long n,a[200009],m,ans;
char c[200009];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	int f=0;
	if(n==1){
		ans=0;
		f=1;
	}
	m=s.size();
	for(int i=1;i<=sqrt(m);i++){
		if(f=1){
			break;
		}
		if(s[i]!=s[m+1-i]){
			ans++;
		}
	}	
	cout<<ans;
	return 0;
}
