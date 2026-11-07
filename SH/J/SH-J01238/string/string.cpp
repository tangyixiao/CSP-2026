#include<bits/stdc++.h>
using namespace std;
const int KS=2e5+10;
int a[KS];
char c[KS];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long ans=0;
	int l=1,r=n;
	while(l<r){
		int x=min(a[l],a[r]);
		a[l]-=x,a[r]-=x;
		if(c[l]!=c[r]){
			ans+=x;
		}
		if(a[l]==0){
			l++;
		}
		if(a[r]==0){
			r--;
		}
	}
	cout<<ans<<"\n";
	return 0;
} 
