#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int c1,c2,c3,c4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s2>>c3>>s4;
	c2=(s2[0]-'0')*10+(s2[1]-'0');
	c4=(s4[0]-'0')*10+(s4[1]-'0');
	if(c1==c3){
		cout<<'1';
		if(c2==c4){
			cout<<'1';
			if(s2[2]-'C'>0&&s4[2]-'C'>0){
				cout<<"11";
			}else if(s2[2]-'C'<=0&&s4[2]-'C'<=0){
				cout<<'1';
				if(s2[2]-s4[2]==1||s2[2]-s4[2]==-1){
					cout<<'1';
				}else{
					cout<<'0';
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