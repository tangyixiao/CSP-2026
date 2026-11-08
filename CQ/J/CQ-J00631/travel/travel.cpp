#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ra,rb,xa,xb;
	cin>>ra>>rb>>xa>>xb;
	if(ra!=xa){
		cout<<"0000";
	}else{
		string a="",b="";
		a+=rb[0];a+=rb[1];
		b+=xb[0];b+=xb[1];
		if(a==b){
			if(rb[2]<='C'&&xb[2]>='D'){
				cout<<"1100";
			}else{
				int l=abs(int(rb[2]-xb[2]));
				if(l==1){
					cout<<"1111";
				}else{
					cout<<"1110";
				}
			}
		}else{
			cout<<"1000";
			
		}
	}
	return 0;
} 
