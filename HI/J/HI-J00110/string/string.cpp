#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n,a,x=0,f=1;
	char b,c[200005]={};
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>a>>b;
    	x+=a;
    	for(int j=x-a;j<x;j++){
    		c[j]=b;
		}
	}
	for(int i=0;i<x-1;i++){
		if(c[i]==c[x-1-i]){
		}
		else{
			f=0;
		}
	}
	if(f==1){
		cout<<0;
	}
	else{
		cout<<x/2;
	}
	return 0;
}
