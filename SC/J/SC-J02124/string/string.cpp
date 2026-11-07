#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int a[200005];
char c[200005];
int Bvvd(int l,int r){
	if(l==r)return 0;
	if(a[l]==a[r]){
		if(c[l]==c[r])return 0;
		else return a[l];
	}
	else{
		if(c[l]==c[r]){
			return 0;
		}
		else{
			return min(a[l],a[r]);
		}
	}
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	int k=0;
	int l=1,r=n;
	while(l<=r){
		k+=Bvvd(l,r);
		if(a[l]>a[r])a[l]-=a[r],r--;
		else if(a[l]<a[r])a[r]-=a[l],l++;
		else l++,r--;
	}
	cout<<k; 
	return 0;
	
}