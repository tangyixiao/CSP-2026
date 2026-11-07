#include <bits/stdc++.h>
using namespace std;
string c1,c2;
int s1=0,s2=0;
char x1,x2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>x1>>c2>>s2>>x2;
	if(c1!=c2){
		cout<<"0000"<<endl;	
	}else{
		if(s1!=s2){
			cout<<"1000"<<endl;
		}else{
			if((x1<='C' && x2<='C')||(x1>'C' && x2>'C')){
				if((x1=='A' && x2=='B')||(x1=='B' && x2=='A')||
					(x1=='C' && x2=='B')||(x1=='B' && x2=='C')||
					(x1=='D' && x2=='F')||(x1=='F' && x2=='D')){
						cout<<"1111"<<endl;
					}else{
						cout<<"1110"<<endl;
					}
			}else{
				cout<<"1100"<<endl;
			}
		}
	}
	return 0;
} 
