#include<bits/stdc++.h>
using namespace std;
string a;
long long s,e,d;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>s;
	while(s--){
		long long q;
		char w;
		cin>>q>>w;
		d+=q;
		while(q--){
			a+=w;
		}
	}
	e=d/2;
	for(long long i=0;i<d/2;i++){
		if(a[i]==a[d-i]){
			e--;
		}
	}
	cout<<e;
	return 0;
}
