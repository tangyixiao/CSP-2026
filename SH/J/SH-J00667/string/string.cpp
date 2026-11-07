#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0;
	cin >> n;
	long long a[n+5];
	char c[n+5];
	for(long long i=1;i<=n;i++){
		cin >> a[i] >> c[i];
	}
	for(long long i=1,j=n;i<=j;){//指针i指向第一个，指针j指向最后一个 
		long long k=min(a[i],a[j]);
		if(c[i]!=c[j]){
			ans+=k;
		}
		a[i]-=k;
		a[j]-=k;
		if(a[i]==0) i++;
		if(a[j]==0) j--;
	}
	cout << ans;
	return 0;
}
