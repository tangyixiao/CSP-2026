#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,s1,c2,s2;
	char a,b;
	cin>>c1>>s1>>a>>c2>>s2>>b;
	if(c1==c2){
		if(s1==s2){
			if((a>='A'&&a<='C'&&b>='A'&&b<'C')||(a>='D'&&a<='E'&&b>='D'&&b<='E')){
				if((a=='A'&&b=='B')||(a=='B'&&b=='C')||(a=='D'&&b=='E')){
					cout<<"1111\n";
				}else if((b=='A'&&a=='B')||(b=='B'&&a=='C')||(b=='D'&&a=='E')){
					cout<<"1111\n";
				}else{
					cout<<"1110\n";
				}
			}else{
				cout<<"1100\n";
			}
		}else{
			cout<<"1000\n";
		}
	}else{
		cout<<"0000\n";
	}
}