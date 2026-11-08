#include<bits/stdc++.h>
using namespace std;
string n,x,z=0,q=0,cs=0,w=1;
char y;
string a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>x;
		cin>>y;
		for(long long j=0;j<x;j++){
			a[z]=y;
			z++;
		}
		q+=x;
	}
	for(long long i=0;i<q/2;i++)
	if(a[i]!=a[q-i-1]){
		w=0;
		break;
	}
	if(w==1){
		cout<<0;
		return 0;
	}
	for(long long i=0;i<q/2;i++){
		if(a[i]!=a[q-i]){
			a[q-i]=a[i];
			cs++;
		}
	}
	cout<<cs;
	return 0;
}
