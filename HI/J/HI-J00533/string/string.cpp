#include<bits/stdc++.h>
using namespace std;
int a[200005];
char c[200005];
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);	
int n;
cin>>n;
for(int i=1;i<=n;i++){
	cin>>a[i]>>c[i];
}
int l=1,r=n;
long long ton=0;
while(l<=r){
	if(a[l]==a[r]&&c[l]==c[r]){
		l++;
		r--;
		continue;
	}
	if(c[l]==c[r]&&a[l]!=a[r]){
		if(a[l]>a[r]){
			a[l]-=a[r];
			r--;
		}
		else{
			a[r]-=a[l];
			l++;
		}
	}
	if(c[l]!=c[r]){
		if(a[l]==a[r]){
			ton+=a[l];
			l++;
			r--;
		}
	    else if(a[l]<a[r]){
	    	ton+=a[l];
	    	a[r]-=a[l];
	    	l++;
		}
		else {
			ton+=a[r];
			a[l]-=a[r];
			r--;
		}
	}
}
cout<<ton;
	return 0;
}
