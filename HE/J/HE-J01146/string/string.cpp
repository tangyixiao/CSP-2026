#include <bits/stdc++.h>
using namespace std;
freopen("string.in",r,stdin);
freopen("string.out",w,stdout);
long long a,s,tol=0;
char d,z[1000005];

int l,r;





int main(){
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>s>>d;
		z[s]=d;
	}
	for(int i;i<a;i++){
		if(z[i]=z[i+2]){
			cout<<0;
			break;
		}
		else{
			cout<<2;
		}
	}
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
