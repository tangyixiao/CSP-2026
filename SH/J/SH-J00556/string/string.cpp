#include<bits/stdc++.h>
using namespace std;
int n;
long long c[200005];
char a[200005];
int main(){
	freopen("string.in","r",stdin);freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>c[i]>>a[i];
	}
	int l=1,r=n;
	long long ans=0;
	while(l<=r){
		if(a[l]!=a[r]){
			if(c[l]>c[r]){
				c[l]-=c[r];
				ans+=c[r];
				r--;
				
			}
			else if(c[l]<c[r]){
				c[r]-=c[l];
				ans+=c[l];
				l++;
			}
			else{
				ans+=c[l];
				l++,r--;
			}
		}
		else{
			if(c[l]>c[r]){
				c[l]-=c[r];
				r--;
			}
			else if(c[l]<c[r]){
				c[r]-=c[l];
				l++;
			}
			else{
				l++,r--;
			}
		}
	}
	cout<<ans;
	return 0; 
}
