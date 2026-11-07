#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	int cs1=(c1[0]-'0')*10+(c1[1]-'0'),cs2=(c2[0]-'0')*10+(c2[1]-'0');
	if(cs1!=cs2){
		cout<<"0000";
		return 0;
	}
	int cp1=(s1[0]-'0')*10+(s1[1]-'0'),cp2=(s2[0]-'0')*10+(s2[1]-'0');
	if(cp1!=cp2){
		cout<<"1000";
		return 0;
	}
	int zw1=s1[2]-'A'+1,zw2=s2[2]-'A'+1;
	if((zw1<=3 && zw2<=3) || (zw1>=4 && zw2>=4)){
		int o=max(zw1,zw2)-min(zw1,zw2);
		if(o==1){
			cout<<"1111";
		}else{
			cout<<"1110";
		}
	}else{
		cout<<"1100";
	}
	return 0;
}