#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string a;
	for(int i=1;i<=n;i++){
		int p;
		char e;
		cin>>p>>e;
		for(int j=1;j<=p;j++){
			a+=e;
		}
	}
	long long s=0;
	for(int i=0;i<a.length()/2;i++){
		if(a[i]!=a[a.length()-1-i])s++;
	}
	cout<<s;
	return 0;
} 
