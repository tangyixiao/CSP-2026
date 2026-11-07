#include<bits/stdc++.h>
using namespace std;
int a[2000005];
string b[2000005],y;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,x=0,l=1,r,m,s=0,t=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>y;
		x+=a[i];
		for(int j=t;j<=x;j++){
			b[j]=y;
		}
		t+=a[i];
	}
	r=x;
	x/2;
	m=(l+r)/2;
	while(l<m&&r>m){
		if(b[l]!=b[r]) {
			s++;
		}
		l++;
		r--;
	}
	if(n%2==0){cout<<s+1;}
	else cout<<s;
}