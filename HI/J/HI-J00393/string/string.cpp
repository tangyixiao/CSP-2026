#include <bits/stdc++.h>
using namespace std;
long long n,k=0,l,a[1000001]={},g,g1=8589934592,g2=10000000000;
string m="",h[1000001]={},o;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>h[i];
		while(a[i]%g1!=0){
			g1/=2;
		}
		while(a[i]%g2!=0){
			g2/=10;
		}
	}
	g=max(g1,g2);
	for(int i=0;i<n;i++){
		a[i]/=g;
		while(a[i]>1){
			if(a[i]%2==1){
				a[i]-=1;
				m+=h[i];
			}
			h[i]+=h[i];a[i]/=2;
		}
		m+=h[i];
	}
	l=m.length()-1;
	for(int i=0;i<m.length()/2;i++){
		if(m[i]!=m[l-i]){
			k++;
		}
	}
	cout<<k*g;
	return 0;
}
