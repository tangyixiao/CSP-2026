#include<bits/stdc++.h>
using namespace std;
long long a[200005],d[200005];
string b[200005],c[400010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,k=0,g=0,h=0;
	cin>>n;
	for(int i=1;i<=n;i++){
	cin>>a[i]>>b[i];
}
for(int i=1;i<=n;i++){
	if(a[i]=a[1]);g++;
}
if(g==n){
	for(int i=1;i<=n/2;i++){
		if(b[i]!=b[n-i+1])h++;
	}
	cout<<h*a[1];
	
}
else{
	d[0]=0;
	for(int i=1;i<=n;i++){
		d[i]=d[i-1]+a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=d[i-1]+1;j<=d[i];j++){
			c[j]=b[i];
		}
	}
		for(int i=1;i<=d[n]/2;i++){
			if(c[i]!=c[d[n]-i+1])k++;
		}
		cout<<k;
	}
}