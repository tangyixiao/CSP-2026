#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],ans;
char b[200005];
int main(){
	freopen("string.in","r",stdout);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int l=1,r=n;
	while(l<r){
		if(b[l]!=b[r]){
			ans+=min(a[l],a[r]);
		}
		if(a[l]>a[r]){
			a[l]-=a[r];
			r--;
		}
		else if(a[l]==a[r]){
			l++;
			r--;
		}
		else{
			a[r]-=a[l];
			l++;
		}
	}
	cout<<ans;
	return 0;
}
