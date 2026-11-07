#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		s+=a[i];
	}
	long long cnt=0;
	int l=1,r=n;
	while(l<r){
		if(a[l]>a[r]){
			if(c[l]!=c[r])cnt+=a[r];			
			a[l]-=a[r];
			r--;			
		}
		else if(a[l]<a[r]){
			if(c[l]!=c[r])cnt+=a[l];			
			a[r]-=a[l];
			l++;		
		}
		else if(a[l]==a[r]){
			if(c[l]!=c[r])cnt+=a[l];
			l++;
			r--;
		}
	}
	cout<<cnt;
	return 0;
}
