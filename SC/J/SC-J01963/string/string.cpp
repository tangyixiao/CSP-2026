#include <bits/stdc++.h>
using namespace std;
vector<char> a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		char c;
		cin>>c;
		for(int j=1;j<=x;j++)a.push_back(c);
		ans+=x;
	}
	for(int i=0;i<=(ans-1)/2;i++){
		if(a[i]!=a[n-i+1])cnt++;
	}
	cout<<cnt;
	return 0;
} 
