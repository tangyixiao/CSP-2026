#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
int  n;
long long  a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long cnt=0;
	bool b=false;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(a[i]==a[i-1] && c[i]!=c[i-1] && i<=n && i-1>=1) b=true;
		else b=false;
	}
	if(b==true || n==1){
		cout<<(n-1)*a[1];
		return 0;
	}
	for(int i=1;i<=n;i++){
		int l=1,r=n;
		if(l<=r){
			if(l==r) cnt+=a[l]/2;
			if(c[l]!=c[r]){
			    cnt+=min(a[r],a[l]);
			    if(a[r]==a[l]){
			    	l++;
			    	r--;
				}
	    	}
	   	    l++;
	    	r--;
	    } 
	}
	if(cnt%2!=0) cout<<cnt/2+1;
	else cout<<cnt/2; 
	return 0;
} 