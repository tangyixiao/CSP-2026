#include<bits/stdc++.h>
using namespace std;

string a,b,c,d;
int p1,p2,tmp;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<"1";
		if(b[0]==d[0]&&b[1]==d[1]){
			cout<<"1";
			if((b[2]<='C'&&d[2]<='C')||(b[2]>='D'&&d[2]>='D')){
				cout<<"1";
				p1=(int)(b[2]);
				p2=(int)(d[2]);
				if(p1>p2){
					tmp=p1;
					p1=p2;
					p2=tmp;
				}
				if(p1+1==p2){
					cout<<"1";
				}else{
					cout<<"0";
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