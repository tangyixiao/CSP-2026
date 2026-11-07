#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long l=1,r=n;
	long long ans=0;
	while(l<r){
		long long x=min(a[l],a[r]);
		if(c[l]==c[r]){
			a[l]-=x;
			a[r]-=x;
		}
		else{
			a[l]-=x;
			a[r]-=x;
			ans+=x;
		}
		if(a[l]==0){
			l++;
		}
		else{
			r--;
		}
	}
	cout<<ans<<endl;
	return 0;
}
