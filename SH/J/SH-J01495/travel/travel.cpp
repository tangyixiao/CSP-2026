#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,s11,s22;
	char s1,s2;
	cin>>c1>>s11>>s1>>c2>>s22>>s2;
	if(c1==c2){
		cout<<1;
		if(s11==s22){
			cout<<1;
			if(s1<='C'&&s2>='D'){
				cout<<0<<0;
			}
			else{
				cout<<1;
				if(s1=='A'&&s2=='C'||s1=='C'&&s2=='A'){
					cout<<0;
				}
				else{
					cout<<1;
				}
			}
		}
		else{
			cout<<0<<0<<0;
		}
	}
	else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}
