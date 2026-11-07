#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,a[N];
char b[N];
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int l=1,r=n;
	while(l<r){
		if(a[l]>a[r]){
			ans+=b[l]==b[r]?0:a[r];
			a[l]-=a[r];
			a[r]=0;
		}
		else{
			ans+=b[l]==b[r]?0:a[l];
			a[r]-=a[l];
			a[l]=0;
		}
		if(a[l]==0)l++;
		if(a[r]==0)r--;
	}
	cout<<ans;
	return 0;
} 
