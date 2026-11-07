#include<bits/stdc++.h>
using namespace std;
long long n,a[200001],l=1,r,ans;
char c[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	r=n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	while(l<r){
		if(a[l]==a[r]){
			if(c[l]!=c[r])
				ans+=a[l];
			l++;
			r--;
		}
		else if(a[l]>a[r]){
			if(c[l]!=c[r])
				ans+=a[r];
			a[l]-=a[r];
			r--;
		}
		else{
			if(c[l]!=c[r])
				ans+=a[l];
			a[r]-=a[l];
			l++;
		}
	}
	cout<<ans;
	return 0;
}
