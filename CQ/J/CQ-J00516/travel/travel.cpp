#include <bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		int shu1,shu2,z1,z2;
		shu1=(s1[0]-'0')*10+(s1[1]-'0');
		shu2=(s2[0]-'0')*10+(s2[1]-'0');
		if(shu1==shu2){
			cout<<"1";
			if((s1[2]=='D'&&s2[2]=='F') || ((s1[2]!='D'&&s1[2]!='F')&&(s2[2]!='D'&&s2[2]!='F'))){
				cout<<"1";
				if(int(s1[2])+1==int(s2[2]) || int(s2[2])+1==int(s1[2])){
					cout<<"1";
				}else{
					cout<<"0";
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

