#include<bits/stdc++.h>
using namespace std;
long long a,b,c,d;
char e,f;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>e>>c>>d>>f;
	if(a==c){
		cout<<1;
		if(b==d){
			cout<<1;
			if(e+f-'A'-'A'==1||e+f-'A'-'A'==8||(e=='B'&&f=='C')||(e=='C'&&f=='B')||(e=='A'&&f=='C')||(e=='C'&&f=='A')){
				cout<<1;
				if((e!='A'||f!='C')&&(e!='C'||f!='A')){
					cout<<1;
				}
				else{
					cout<<0;
					return 0;
				}
			}
			else{
				cout<<"00";
				return 0;
			}
		}
		else{
			cout<<"000";
			return 0;
		}
	}
	else{
		cout<<"0000";
		return 0;
	}
}
