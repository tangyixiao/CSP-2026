#include<bits/stdc++.h>
using namespace std;
long long a[200005],a1[200005];
char c[200005],c1[200005];
long long s[200005];
vector<long long> v;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	long long L=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		L+=a[i];
		s[i]=s[i-1]+a[i];
	}
	for(int i=1;i<=n;i++){
		v.push_back(s[i-1]+1);
		v.push_back(L-s[i-1]+1);
	}
	sort(v.begin(),v.end());
	long long k=1,cnt=0,l=v.size()-1;
	for(int i=1;i<l;i++){
		if(v[i]==v[i-1]) continue;
		while(v[i]>s[k]) k++;
		c1[++cnt]=c[k];
		a1[cnt]=v[i]-v[i-1];
	}
	long long ans=0;
	for(int i=1;i<=(cnt+1)/2;i++){
		if(c1[i]!=c1[cnt-i+1]) ans+=a1[i];
	}
	cout<<ans;
	return 0;
}
