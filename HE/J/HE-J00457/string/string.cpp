#include<bits/stdc++.h>
using namespace std;
long long n,a[200100],ans,l,r;
char b[200100];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	l=1;
	r=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	while(l<r){
		if(b[l]!=b[r]){
			ans+=min(a[l],a[r]);
		}
		if(a[l]==a[r]){
			l+=1;
			r-=1;
		}
		else if(a[l]>a[r]){
			a[l]-=a[r];
			r-=1;
		}
		else{
			a[r]-=a[l];
			l+=1;
		}
	}
	cout<<ans;
	return 0;
}
