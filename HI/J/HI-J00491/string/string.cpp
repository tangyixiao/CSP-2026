#include<bits/stdc++.h>
using namespace std;

int x,v,z=1,s,n;
string y;
string a[100000005];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>x;
		cin>>y;
		for(int j=1;j<=x;j++){
			v++;
			a[v]=y;
		}
	} 
	for(int i=1;i<=v/2;i++){
		if(a[z]!=a[v]){
		    s++;
	    } 
	    z++;
	    v--;
	} 
	cout<<s;
	return 0;
}
