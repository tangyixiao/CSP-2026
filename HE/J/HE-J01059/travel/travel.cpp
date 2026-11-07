#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b,c,d;
	char c1,b1,d1,c2,b2,d2;
	cin>>a>>c1>>b1>>d1>>d>>c2>>b2>>d2;
	b=(c1-'0')*10+(b1-'0');
	c=(c2-'0')*10+(b2-'0');
	if(d1=='F') d1='E';
	if(d2=='F') d2='E';
	if(a==d){
		cout<<1;
		if(b==c){
			cout<<1;
			if((d1<='C')&&(d2<='C')){
				cout<<1;
				if(abs(d1-d2)==1){
					cout<<1;
				}
				else cout<<"0";
			}
			else if((d1>'C')&&(d2>'C')){
				cout<<1;
				if(abs(d1-d2)==1){
					cout<<1;
				}
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000"; 
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
