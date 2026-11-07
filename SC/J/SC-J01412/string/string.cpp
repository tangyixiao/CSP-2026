#include<bits/stdc++.h>
using namespace std;
int x[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>c[i];
	}
	int l=1,r=n;
	long long ans=0;
	while(l<=r){
		if(l==r){
			break;
		}
		if(c[l]!=c[r]){
			if(x[l]==x[r]){
				l++,r--;
				ans+=x[l-1];
			}
			else if(x[l]<x[r]){
				l++;
				x[r]-=x[l-1];
				ans+=x[l-1];
			}
			else{
				r--;
				x[l]-=x[r+1];
				ans+=x[r+1];
			}
		}
		else{
			if(x[l]==x[r]){
				l++,r--;
			}
			else if(x[l]<x[r]){
				l++;
				x[r]-=x[l-1];
			}
			else{
				r--;
				x[l]-=x[r+1];
			}
		}
	}
	cout<<ans;
	return 0;
} 