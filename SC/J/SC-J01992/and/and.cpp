#include <bits/stdc++.h>
using namespace std;
int n,m,maxx=INT_MIN;
int h[100000000];
int andk(int a,int b){
	if(a==b) return a;
	if(a<b) return a;
	if(a>b) return b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>h[i];
	}
	for(int i=1;i<n;i++){
		if(andk(h[i],h[i+1])>=maxx) maxx=andk(h[i],h[i+1]);
	}
	cout<<maxx;
	return 0;
}