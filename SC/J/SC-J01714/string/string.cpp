#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.in","w",stdout);
	long long n,m=0,max=0,x=0;
	string c;
	cin>>n;
	long long a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=0;j<n;j++){
			if(c[i]-c[j]==0){
				a[i]+=a[i-j];
				a[i-j]=0;
			}
		}
		if(a[i]>=max) max=a[i];
		x+=a[i];
	}
	if(n==2){
		if(c[1]==c[2]) cout<<0;
    	else{
    		if(a[1]>=a[2]) cout<<a[2];
    		else cout<<a[1];
	    	}
	}
	else{
			cout<<x-max;
	}
	return 0;
}