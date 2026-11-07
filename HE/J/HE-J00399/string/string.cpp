#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],x,ans;
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	for(int i=1;i<=n;i++)x+=a[i];
	ans=x/2;
	for(int l=1,r=n;;){
		long long ll=l,rr=r;
		if(l!=r){
			if(c[l]==c[r])ans-=min(a[l],a[r]);
	        if(a[ll]<=a[rr])l++;
		    if(a[ll]>=a[rr])r--;
		    if(a[ll]>a[rr])a[ll]-=a[rr];
		    if(a[ll]<a[rr])a[rr]-=a[ll];
		}
		if(l==r){
			if(c[l]==c[r])ans-=a[l]/2;
			break; 
		}
		if(l>r)break;
	}
	cout<<ans;
	return 0;
} 
