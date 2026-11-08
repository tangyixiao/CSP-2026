#include<bits/stdc++.h>
using namespace std;
string c1,c2,z1,z2;
int cs1,cs2,cp1,cp2,zw1,zw2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>z1>>c2>>z2;
	cs1=(c1[0]-'0')*10+c1[1]-'0';
	cs2=(c2[0]-'0')*10+c2[1]-'0';
	cp1=(z1[0]-'0')*10+z1[1]-'0';
	cp2=(z2[0]-'0')*10+z2[1]-'0';
	zw1=int(z1[2]-64);
	zw2=int(z2[2]-64);
	if(cs1==cs2){
		if(cp1==cp2){
			if((zw1>3&&zw2>3)||(zw1<4&&zw2<4)){
				if(abs(zw1-zw2)==1) cout<<"1111";
				else cout<<"1110";
			}else cout<<"1100";
		}else cout<<"1000";
	}else cout<<"0000";
	return 0;
}
