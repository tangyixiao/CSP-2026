#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,c=0,a=0;
	cin>>n;
	string z,f;
	for(int i=0;i<n;i++){
		cin>>c;
		cin>>z;
		for(int j=0;j<c;j++){
		f+=z;
		a+=1;
		}
	}
	n=0;
	if(a%2==0)a+=1;
	for(int i=0;i<=a/2;i++){
		if(f[i]!=f[a-i-1])n+=1;
	}
	cout<<f<<n;
	return 0;
}
