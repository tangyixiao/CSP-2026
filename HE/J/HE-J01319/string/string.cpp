#include<bits/stdc++.h>
using namespace std;
long long n,l,r,ans;
string s,k,q;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int p=1;p<=n;p++){
		cin>>l>>k;
		r+=l; 
		for(int i=1;i<=l;i++) s+=k;
	}
	r=(r+1)/2-1; 
	q=s;
	reverse(s.begin(),s.end());
	for(int i=0;i<=r;i++)if(s[i]!=q[i]) ans++;
	cout<<ans;
	return 0;
 } 

