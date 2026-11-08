#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a[200005];
	char c[200005];
	long long b;
	long long l=1,r;
	long long n,k=0;
	cin>>n;
	b=n;
	r=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	while(b>1){
		if(c[l]!=c[r]){
			if(a[l]>=a[r]){
				a[l]-=a[r];
				k+=a[r];
				a[r]=0;
				b--;
				r--;
			}
			if(a[r]>=a[l]){
				a[r]-=a[l];
				k+=a[l];
				a[l]=0;
				b--;
				l++;
			}
		}else{
			if(a[l]>=a[r]){
				a[l]-=a[r];
				a[r]=0;
				b--;
				r--;
			}
			if(a[r]>=a[l]){
				a[r]-=a[l];
				a[l]=0;
				b--;
				l++;
			}
		}
	}
	cout<<k;
	return 0;
}
