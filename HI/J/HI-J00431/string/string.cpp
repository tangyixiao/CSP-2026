#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//.....
	long long n;
	cin>>n;
	long long cnt=1;
	for(int i=1;i<=n;i++) {
		long long x;
		cin>>x;
		char c;
		cin>>c;
		for(int l=1;l<=x;l++){
			s[cnt]=c;
			cnt++;
		}
	} 
	long long l1=1,l2=cnt-1,ans=0;
	for(;l1<=l2;l1++,l2--){
		if(s[l1]!=s[l2]){
			s[l1]=s[l2];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
