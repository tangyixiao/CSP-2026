#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		int a1=(s1[0]-'0')*10+(s1[1]-'0');
		int a2=(s2[0]-'0')*10+(s2[1]-'0');
		if(a1==a2){
			cout<<1;
			if(s1[2]<='C'&&s1[2]>='A'&&s2[2]<='C'&&s2[2]>='A'){
				cout<<1;
				if(abs(s1[2]-s2[2])==1){
				cout<<1;
				}
				else cout<<0;
			}
			else if(s1[2]<='F'&&s1[2]>='D'&&s2[2]<='F'&&s2[2]>='D'){
				cout<<1;
				if(abs(s1[2]-s2[2])==1){
					cout<<1;
				}
				else cout<<0;
			}
			else cout<<0<<0;
			}
			else cout<<0<<0<<0;
		}
		else cout<<0<<0<<0<<0;
	
	return 0;
}
