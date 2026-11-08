#include <bits/stdc++.h>
using namespace std;
int n,m,ans;
long long a[200005];
int ad(long long x,long long y){
	long long c=x,d=y;
	string t,s;
	while(c!=0){
		if(c%2==0) t+='1';
		else t+='0';
		c=c/2;
	}
	while(d!=0){
		if(d%2==0) s+='1';
		else s+='0';
		d=d/2;
	}
	string cnt;
	long long len=0,len2=0;
	while(len<t.size()&&len2<s.size()){
		if(t[len]==s[len2]){
			cnt+=t[len];
		}
		else cnt+='0';
	}
	long long sum=0,j=0;
	long long len3=cnt.size();
	for(long long i=len3-1;i>=0;i--){
		sum+=pow(2,j);
		j++;
	}
}
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			ans=max(ans,ad(a[i],a[j]));
		}
	}
	cout<<ans;
	return 0;
}

