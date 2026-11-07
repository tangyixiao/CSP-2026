#include<bits/stdc++.h>
using namespace std;
int n,x[200005];
char y[200005];
long long ans,num[200005],l,r;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>y[i];
		num[i]=num[i-1]+x[i];
	}
	l=1;
	r=n;
	for(int i=l;i<=r;i++){//aabbc 2 2 1  5 2 
		if(x[l]==x[r]){
			if(y[l]==y[r]){
			}
			else{
				ans=ans+x[l];
			}
			l++;
			r--;
		}
		else if(x[l]>x[r]){
			if(y[l]==y[r]){
				x[l]=x[l]-x[r];
				l--;
			}
			else{
				ans=ans+x[r];
				x[l]=x[l]-x[r];
				l--;
			}
			r--;
		}
		else{
			if(y[l]==y[r]){
				x[r]=x[r]-x[l];
				r++;
			}
			else{
				ans=ans+x[l];
				x[r]=x[r]-x[l];
				r++;
			}
			l++;
		}
	}
	cout<<ans;
	return 0;
}
