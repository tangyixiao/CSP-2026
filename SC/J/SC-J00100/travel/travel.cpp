#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(((int)s1[0]-'0')*10+((int)s1[1]-'0')==((int)s2[0]-'0')*10+((int)s2[1]-'0')){
			cout<<1;
			if((int)s1[2]>='A'&&(int)s1[2]<='C'&&(int)s2[2]>='A'&&(int)s2[2]<='C'){
				cout<<1;
				if((int)s1[2]=='B'){
					cout<<1;
				}
				else if((int)s2[2]=='B'){
					cout<<1;
				}
				else cout<<0<<"+";
			}else if(((int)s1[2]=='D'||(int)s1[2]=='F')&&((int)s2[2]=='D'||(int)s2[2]=='F')){
				cout<<11;
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}