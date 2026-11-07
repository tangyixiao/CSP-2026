#include<bits/stdc++.h>
using namespace std;
struct zw{
	int che,pai,zuo;
};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	zw r,x;
	
	if(c1[0]==0)r.che=c1[1]-'0';
	else r.che=(c1[0]-'0')*10+(c1[1]-'0');
	r.zuo=s1[2]-'A'+1;
	if(s1[0]==0)r.pai=s1[1]-'0';
	else r.pai=(s1[0]-'0')*10+(s1[1]-'0');
	
	if(c2[0]==0)x.che=c2[1]-'0';
	else x.che=(c2[0]-'0')*10+(c2[1]-'0');
	x.zuo=s2[2]-'A'+1;
	if(s2[0]==0)x.pai=s2[1]-'0';
	else x.pai=(s2[0]-'0')*10+(s2[1]-'0');
	
	if(x.che==r.che){
		cout<<"1";
		if(x.pai==r.pai){
			cout<<"1";
			if(x.zuo<=3&&r.zuo<=3||x.zuo>=4&&r.zuo>=4){
				cout<<"1";
				if(abs(x.zuo-r.zuo)==1&&x.zuo<=3&&r.zuo<=3)cout<<"1";
				if(x.zuo>=4&&r.zuo>=4)cout<<"1";
				else cout<<"0";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	
	return 0;
}
