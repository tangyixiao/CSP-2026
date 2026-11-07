#include<bits/stdc++.h>
using namespace std;
int n,t,sum;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		char c;
		cin>>a>>c;
		t+=a;
		while(a--) s+=c;
	}
	for(int l=t/2-1,r=l+1;l>=0;l--,r++){
		if(s[l]==s[r]) continue;
		else sum++;
	}
	cout<<sum;
	return 0;
} 
