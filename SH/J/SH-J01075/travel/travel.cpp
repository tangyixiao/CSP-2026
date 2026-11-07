#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int read(string x){
	int r=0;
	for(auto i:x){
		r=r*10+(i-'0');
	}
	return r;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	cin>>c1>>s1>>c2>>s2;
	int k1=read(c1),k2=read(c2);
	char n1,n2;
	int p=0,q=0;
	for(auto i:s1){
		if(i>='A' && i<='F'){
			n1=i;
			break;
		}
		p=p*10+(i-'0');
	}
	for(auto i:s2){
		if(i>='A' && i<='F'){
			n2=i;
			break;
		}
		q=q*10+(i-'0');
	}
	if(k1==k2){
		cout<<1;
		if(p==q){
			cout<<1;
			if((n1<='C' && n2<='C')||(n1>='D'&& n2>='D')){
				cout<<1;
				if(abs(1*n1-n2)==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}
