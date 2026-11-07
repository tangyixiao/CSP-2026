#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out ","w",stdin);
	string s;
	int a=0,b=0,c=0,d=0;
	for(int i=1;i<=10;i++){
		cin>>s[i];
	}
	if(s[1]==s[6] && s[2]==s[7]){
		a=1;
		if(s[3]==s[8] && s[4]==s[9]){
			b=1;
			if(s[5]>='A' && s[5]<='C'&& s[10]>='A' && s[10]<='C'){
				c=1;
				if(s[5]-s[10]==-1 || s[5]-s[10]==1){
					d=1;
				}
			}else if(s[5]>='D' && s[5]<='F'&& s[10]>='D' && s[10]<='F'){
				c=1;
				d=1;
			}
		}
	}
	
	
	
	cout<<a<<b<<c<<d;
	return 0;
} 