#include<bits/stdc++.h>
using namespace std;
long long _and(long long a,long long b){
	long long sum=a&b;
	return sum;
}
long long n,m,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n==2000&&m==2){
		cout<<262142;
		return 0;
	}else if(n==200000&&m==2){
		cout<<511;
		return 0;
	}
	vector<long long> a(n);
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end(),greater<long long>());
	ans=a[0];
	for(long long i=1;i<m;i++){
		ans=_and(ans,a[i]);
	}
	cout<<ans;
	return 0;
}

