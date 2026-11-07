#include<iostream>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int er,n,m=10000000,h=0;
	char l,d;
	cin>>er;
	cin>>n>>l;
	d==l;
	for(int i=1;i<=er-1;i++){
		cin>>n>>l;
		if(l==d&&h==0){
			h=0;
		}else{
			h=1
		}
		if(n<m){
			m=n;
		}
	}
	if(h==0){
		cout<<0;
	}else{
		cout<<m;
	}
	return 0;
} 
