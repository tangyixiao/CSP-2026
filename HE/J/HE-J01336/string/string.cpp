#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],ans=0;
char z[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>z[i];
	}
	int l=1,r=n;
	while(r>l){
		if(a[r]>a[l]){
			if(z[r]!=z[l]) ans+=a[l];
			a[r]-=a[l];
			l++;
		}else if(a[r]<a[l]){
			if(z[r]!=z[l]) ans+=a[r];
			a[l]-=a[r];
			r--;
		}else{
			if(z[r]!=z[l]) ans+=a[l];
			l++,r--;
		}
	}
	cout<<ans;
	return 0; 
}
