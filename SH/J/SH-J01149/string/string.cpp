#include<bits/stdc++.h>
using namespace std;
long long n,cnt,a[200100],res,pre[200100];
char c[200100];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		pre[i]=pre[i-1]+a[i];
		res+=a[i];
	}
	int l=1,r=n;
	while(l<=r){
		if(r-l==1&&res%2!=0){
			if(pre[l]>res-pre[r-1]){
				if(c[l]!=c[r])cnt+=a[r]-1;
				r--;	
			}
			else{
				if(c[l]!=c[r])cnt+=a[l]-1;
				l++;
			} 
		}
		if(pre[l]>res-pre[r-1]){
			if(c[l]!=c[r])cnt+=a[r];
			r--;	
		}
		else{
			if(c[l]!=c[r])cnt+=a[l];
			l++;
		} 
	}
	cout<<cnt;
	return 0;
}
