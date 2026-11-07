#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string a1,b1,a2,b2;
	cin>>a1>>b1>>a2>>b2;
	char c1=b1[2],c2=b2[2];
	b1[2]=0,b2[2]=0;
	if(a1==a2){
		cout<<1;
		if(b1==b2){
			cout<<1;
			if(c1>='A'&&c1<='C'&&c2>='A'&&c2<='C'){
				cout<<1;
				if(abs(c1-c2)==1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else if(c1=='D'&&c2=='F'||c1=='F'&&c2=='D'){
				cout<<"11";
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
}