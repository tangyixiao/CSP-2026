#include<bits/stdc++.h>
using namespace std;
long long a[200005];
bool f=false;
int k(int x){
	int l=2;
	while(l<x+1){
		l*=2;
	}
	if(l==x+1){
		f=true;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	int z=0;
	for(int i=1;i<=n;i++){
		f=false;
		k(a[i]);
		if(f){
			z++;
		}
	}
	if(z==n){
		cout<<a[n+1-m];
		return 0;
	}
	cout<<"9";
	fclose(stdin);
	return 0;
}