#include <bits/stdc++.h>
using namespace std;
	long long  n,h;
	string a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		int c;
		char b;
		cin>>c>>b;
		while(c--)a+=b;
		
	}
	for(int i=0;i<a.size()/2;i++){
		if(a[i]!=a[a.size()-i-1])h++;
	}
	cout<<h;
	return 0;
} 
