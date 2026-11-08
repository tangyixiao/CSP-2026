#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+10;
int a[N]={0},len=0,n;
long long ans;
char c[N]={0};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int ai;
		char ci;
		cin>>ai>>ci;
		if(ci==c[len]){
			a[len]+=ai;
		}
		else{
			len++;
			a[len]=ai;
			c[len]=ci;
		}
	}
	if(len==1){
		cout<<0;
		return 0;
	}
	long long l=1,r=len,ans=0;
	while(l<r){
		if(c[l]!=c[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				ans+=a[r];
				r--;
			}
			if(a[l]<a[r]){
				a[r]-=a[l];
				ans+=a[l];
				l++;
			}
			else{
				ans+=a[l];
				l++;
				r--;
			}
		}
		else{
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}
			if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}
			else{
				l++;
				r--;
			}	
		}
	}
	cout<<ans;
	return 0;
} 
