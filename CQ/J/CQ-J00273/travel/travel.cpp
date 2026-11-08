#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string p1,p2;
	p1+=s1[0];
	p1+=s1[1];
	p2+=s2[0];
	p2+=s2[1];
	char z1=s1[2],z2=s2[2];
	
	if(c1!=c2){
		cout<<"0000";
	}
	else{
		cout<<"1";
		if(p1!=p2){
			cout<<"000";
		}
		else{
			cout<<"1";
			if(!((z1<='C' && z1>='A' && z2<='C' && z2>='A')||(z1<='F' && z1>='D' && z2<='F' && z2>='D'))){
				cout<<"00";
			}
			else{
				cout<<"1";
				if(z1<='F' && z1>='D' && z2<='F' && z2>='D'){
					cout<<"1";
				}
				else if((z1-z2)==1 || (z1-z2)==-1){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
		}
	}
	return 0;
} 
