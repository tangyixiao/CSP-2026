#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[200005];
char c[200005];
int b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	ll sum=0;
	int l=1,r=n;
	while(a[l]!=0&&a[r]!=0&&l!=r){
		if(a[l]<a[r]){
			if(c[l]!=c[r]) sum+=a[l];
			a[r]-=a[l];
			l++;
		}
		else if(a[l]>a[r]){
			if(c[l]!=c[r]) sum+=a[r];
			a[l]-=a[r];
			r--;
		}
		else{
			if(c[l]!=c[r]) sum+=a[l];
			a[l]=a[r]=0;
			l++,r--;
		}
	}
	cout<<sum;
}