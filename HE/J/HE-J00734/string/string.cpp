#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int g=0;
	int a[n];
	char b[n];
	string zf;
	int z=zf.size();
	for(int i=0;i<n;i++) cin>>a[i]>>b[i];
	for(int i=0;i<n;i++){
		for(int j=1;j<=a[i];j++) zf+=b[i];
 	}
	int s=zf.size()/2;
	for(int i=0;i<s;i++){
		if(b[i]!=b[z-i]) g+=1;
	}cout<<g;
	return 0;
}

