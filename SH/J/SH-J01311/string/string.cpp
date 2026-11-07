#include <bits/stdc++.h>
using namespace std;
long long b[200007];
pair<long long,char> a[200007];
long long n,ans=0,cnt=0;
int search(){
	for(int i=1;i<=n;i++)
		if(b[i]>cnt/2) return i;
	return 0;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long m;
		cin>>m;
		a[i].first=m;
		cnt+=m;
		cin>>a[i].second;
		b[i]=cnt;
	}
	long long len=search();
	for(int i=1,j=n,x=1;x<=cnt;x++){
		if(i>len) break;
		a[i].first--;
		a[j].first--;
		ans+=(a[i].second==a[j].second? 0:1);
		if(a[i].first==0)i++;
		if(a[j].first==0)j--;
	}
	cout<<ans<<endl;
	return 0;
}
