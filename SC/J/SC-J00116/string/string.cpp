#include<bits/stdc++.h>
using namespace std;
int n;
struct st{
	int a;
	char b;
}c;
string s;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>c.a>>c.b;
		for(int j=1;j<=c.a;j++){
			s+=c.b;
		}
	}
	long long l=s.size();
	for(int i=l/2+1;i<l;i++){
		if(s[i]!=s[l-i-1]){
			s[i]=s[l-i-1];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}