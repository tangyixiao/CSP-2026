#include<bits/stdc++.h>
using namespace std;
string a,b;
int t,n,ans,ans2;
char d;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>t;
	while(t--){
		cin>>n>>d;
		for(int i=1;i<=n;i++){
			a+=d;
		}
	}
	b=a;
	reverse(a.begin(),a.end());
	if(a==b) {cout<<0;return 0;}
	else{
		for(int i=0;i<(int)a.size()/2;i++)
		{
			if(a[i]!=b[i]) ans++;
		}
		for(int i=(int)a.size()/2;i<(int)a.size();i++)
		{
			if(a[i]!=b[i]) ans2++;
		}
	}
//	cout<<a<<"\n"<<b<<"\n";
	cout<<min(ans,ans2);
	return 0;
}