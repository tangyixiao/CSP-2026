#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a1,b1,c1,e1,d1,a2,b2,c2,d2,e2;
	cin>>a1>>b1>>c1>>d1>>e1;
	cin>>a2>>b2>>c2>>d2>>e2;
	int ca1,li1;
	ca1=(a1-'0')*10+b1-'0';
	li1=(c1-'0')*10+d1-'0';
	int ca2,li2;
	ca2=(a2-'0')*10+b2-'0';
	li2=(c2-'0')*10+d2-'0';
	if(ca1==ca2){
		cout<<1;
		if(li1==li2){
			cout<<1;
			if(e1<'D'&&e2<'D'||e1>'C'&&e2>'C'){
				cout<<1;
				if(e1-e2==1||e1-e2==-1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<0<<0;
			}
		}else{
			cout<<0<<0<<0;
		}
	}else{
		cout<<0<<0<<0<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
