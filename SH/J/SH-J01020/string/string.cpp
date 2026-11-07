#include<bits/stdc++.h>
using namespace std;
int n,last,id;
char c[200005];
long long ans,sum,h,a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	last=n;
	for(int i=1;i<=n;i++){
		long long mn=min(a[i],sum-h);
		h+=mn;
		while(mn){
			if(c[i]!=c[last]){
				ans+=min(a[last],mn);
			}
			if(mn<=a[last]){
				a[last]-=mn;
				mn=0;
			}
			else{
				mn-=a[last];
				a[last]=0;
				last--;
			}
		}
		if(h==n/2){
			break;
		} 
	}
	cout<<ans;
	return 0;
}
