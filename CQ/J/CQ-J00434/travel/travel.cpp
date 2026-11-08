#include<iostream>
using namespace std;
char x,y,t1,t2;
int c1,r1,c2,r2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>y;
	c1=(x-'0')*10+(y-'0');
	cin>>x>>y;
	r1=(x-'0')*10+(y-'0');
	cin>>t1;
	cin>>x>>y;
	c2=(x-'0')*10+(y-'0');
	cin>>x>>y;
	r2=(x-'0')*10+(y-'0');
	cin>>t2;
	if(c1==c2){
		cout<<"1";
		if(r1==r2){
			cout<<"1";
			if((t1<='C' and t1>='A' and t2<='C' and t2>='A')||(t1<='F' and t1>='D' and t2<='F' and t2>='D')){
				cout<<"1";
				if((t1=='A' and t2=='C')||(t1=='C' and t2=='A')){
					cout<<"0";
				}else cout<<"1";
			}
			else cout<<"00";
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
	return 0;
}
