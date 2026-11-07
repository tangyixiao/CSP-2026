#include<bits/stdc++.h>
using namespace std;
string c1,c2;
char s1[10],s2[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1[1]>>s1[2]>>s1[3]>>c2>>s2[1]>>s2[2]>>s2[3];
	if(c1==c2){//同车
		cout<<"1";
		if(s1[1]==s2[1]&&s1[2]==s2[2]){//同排
			cout<<"1";
			if(s1[3]>'C'&&s2[3]>'C'){//同侧
				cout<<"11";
			}else if(s1[3]<='C'&&s2[3]<='C'){
				cout<<"1";
				if(s1[3]=='A'&&s2[3]=='C'||s1[3]=='C'&&s2[3]=='A'){//相邻 
					cout<<"0";
				}else{
					cout<<"1";
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