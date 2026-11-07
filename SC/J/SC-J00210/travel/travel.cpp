#include<bits/stdc++.h>
using namespace std;
string s,s1,s2,s3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>s1>>s2>>s3;
	if(s!=s2){
		cout<<"0000";
		return 0;
	}
	else{
		cout<<1;
		if(!(s1[1]==s3[1]&&s1[0]==s3[0])){
			cout<<"000";
			return 0;
		}
		else{
			cout<<1;
			char a=s1[2],b=s3[2];
			if(!((a>='A'&&a<='C'&&b>='A'&&b<='C')||(a>='D'&&a<='F'&&b>='D'&&b<='F'))){
				cout<<"00";
				return 0;
			}
			else{
				cout<<1;
				if(int(a-b)==1||int(a-b)==-1||a=='D'||b=='D') {
					cout<<1;
				}
				else cout<<0;
			}
		}
	}
	return 0;
}