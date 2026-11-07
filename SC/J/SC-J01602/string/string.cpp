#include<bits/stdc++.h>
using namespace std;
int a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,i=1;
	long long ans=0;
	cin>>n;
	while(i<=n){
		cin>>a[i]>>c[i];
		i++;
	}
	i=1;
	int r=1,l=n;
	while(r<l){
		if(a[r]>a[l]){
			if(c[r]==c[l]){
				a[r]-=a[l];
				l--;
			}
			else {
				ans+=a[l];
				a[r]-=a[l];
				l--;
				
			}
		}
		else{
			if(c[r]==c[l]){
				a[l]-=a[r];
				r++;
			}
			else {
				ans+=a[r];
				a[l]-=a[r];
				r++;
				
			}
		}
	}
	cout<<ans;
	return 0;
}