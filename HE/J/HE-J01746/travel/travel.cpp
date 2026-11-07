//Trick||Treat!
#include<bits/stdc++.h>
using namespace std;
int c1,c2,s1,s2,b1,b2;
char d1,d2;
char aaa(char x) {
	if(x=='A')return 1;
	if(x=='B')return 2;
	if(x=='C')return 3;
	if(x=='D')return 4;
	if(x=='F')return 5;
}
int main() {
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	scanf("%d%d",&c1,&s1);
	cin>>d1;
	scanf("%d%d",&c2,&s2);
	cin>>d2;
	b1=aaa(d1);
	b2=aaa(d2);
	if(c1==c2) {
		if(s1==s2) {
			if(s1==s2&&b1<=3&&b2<=3) {
				if(b1+1==b2||b2-1==b1) {
					if(b1!=3||b2!=4) {
						cout<<"1111";
					} else cout<<"1110";
				}else{
					cout<<"1110";
				}
			} else {
				cout<<"1100";
			}
		} else {
			cout<<"1000"; 
		}
	} else {
		cout<<"0000";
	}
	return 0;
}
