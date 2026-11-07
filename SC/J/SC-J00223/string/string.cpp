#include<bits/stdc++.h>
using namespace std;
string d,x;
long long a,c[1000000000],z;
long long y,l,r,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(long long i=0;i<a;i++){
		cin>>c[i]>>x;
		for(long long j=c[i-1];j<c[i];++j)d[j]=x[0];
	}
	z=a;
	a-=1;
	while(a--){
		y+=c[a];
	}
	l=0;
	r=z-1;
	for(long long i=1;i<=y/2+1;++i){
		if(d[l]!=d[r]){
			ans+=1;
		}
		l++;
		r--;
	}
	cout<<ans;
	return 0;
} 