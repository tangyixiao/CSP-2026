#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int n,a[200005],x;
ll ans=0;
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i]>>b[i];
	int l=0,r=n-1;
	while(l<r){
		if(b[l]==b[r]){
			x=min(a[l],a[r]);
			a[l]-=x;
			a[r]-=x;
			if(a[l]<=0)l++;
			if(a[r]<=0)r--;
		}else{
			x=min(a[l],a[r]);
			ans+=x;
			a[l]-=x;
			a[r]-=x;
			if(a[l]<=0)l++;
			if(a[r]<=0)r--;
		}
	}cout<<ans;
	return 0;
}
