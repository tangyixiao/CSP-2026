#include<bits/stdc++.h>
using namespace std;
long long a[200004];
char b[200004];
int main(){
 	freopen("string.in","r",stdin);
 	freopen("string.out","w",stdout);
 	long long n,r=0,l=1,mid,ans=0;
 	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	} 
	r=n;
	while(l!=r){
		if(b[l]!=b[r]){
			ans=min(a[l],a[r])+ans;
			int k=min(a[l],a[r]);
			a[r]-=k;
			a[l]-=k;
		}
		else {
			a[r]-=min(a[l],a[r]);
			a[l]-=min(a[l],a[r]);
		}
		if(a[l]==0)l++;
		if(a[r]==0)r--;
	}
	cout<<ans;
 	return 0;
 }

 
