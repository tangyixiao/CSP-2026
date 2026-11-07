#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long a,sum=0,ans=0;
	string s;
	char b;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int i=1;i<=a;i++)s+=b;
		sum+=a;
	}
	for (int i=0;i<sum/2;i++){
		if(s[i]!=s[sum-i-1]) ans++;
	}
	cout<<ans;
	return 0;
}
