#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string t;
	long long n,a,sum=0,ans=0;
	char c;
	cin>>n;
	t+=' ';
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			t+=c;
		}
		sum+=a;
	}
	for(long long i=1;i<=sum/2;i++){
		if(t[i]!=t[sum-i+1]) ans++;
	}
	cout<<ans;
	return 0;
} 
