#include <bits/stdc++.h>
using namespace std;
main(){
	freopen("string.in","r",in);
	freopen("string.out","w",our);
	int a,b[10086],c=0,n=0;
	string s,z;
	cin>>a;
	string z1;
	for(int i=0;i<=a-1;i++){
		cin>>b[i]>>s[i];
		for(int j=c;j<=c+b[i]-1;j++){
			z[j]=s[i];
		}
		c+=b[i];
	}
	for(int i=c;i>=ceil(c/2);i--){
		z1[i]=z[c-i-1];
	}
	for(int i=c;i>=ceil(c/2);i--){
		if(z1[i]!=z[i]){
			n+=1;
		}
	}
	cout<<n;
	return 0;
}
	