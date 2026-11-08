#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
	long long t,cnt=0;
	cin>>t;
	for(int i=1;i<=t;++i){
		long long sum;
		char ch;
		cin>>sum>>ch;
		a[i]=sum;c[i]=ch;
	}
	int x=t;
	for(int i=1;i<=t;++i){
		long long s=0;
		while(s<a[i]&&x>i){
			//cout<<s<<endl;
			if(c[x]!=c[i])cnt+=min(a[i]-s,a[x]);
			//if(a[i]-s<=a[x])a[x]-=a[i]+s;
			s+=a[x];
			x--;
		}
	}
	cout<<cnt;
	return 0;
}

