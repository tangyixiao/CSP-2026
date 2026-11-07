#include<bits/stdc++.h>
using namespace std;
long long n,a[200005];
string c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string s;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	long long l=0,r=s.size()-1,ans=0;
	while(l<r)
	{
		if(s[l]!=s[r]){
			ans++;
		}
		l++;
		r--;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
