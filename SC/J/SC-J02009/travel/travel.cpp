#include<bits/stdc++.h>
#define int long long
using namespace std;
int c1, c2;
string s1, s2;
signed main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	//chexiang
	if(c1==c2){
		cout<<"1";
	}else if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	//pai
	int x=((s1[0]-'0')+(s1[1]-'0')),y=((s2[0]-'0')+(s2[1]-'0'));
	if(x==y){
		cout<<"1";
	}else if(x!=y){
		cout<<"000";
		return 0;
	}
	//ce
	char str1 = s1[2], str2 = s2[2];
	int z=(str1 - '0'),s=(str2 - '0');
	if ((z >= 17) && (z <= 19)) {
		if((s >= 17) && (s <= 19)){
			cout<<"1";
		}else{
			cout<<"00";
			return 0;
		}		
	}else if((z == 20) ||(z == 22)){
		if((s == 20) ||(s == 22)){
			cout<<"1";
		}else{
			cout<<"00";
			return 0;
		}
	}
	//xiangling
	if(s==17){
		if(z!=18){
			cout<<"0";
			return 0;
		}
	}
	else if(s==18){
		if(z!=17 && z!=19){
			cout<<"0";
			return 0;
		}
	}
	else if(s==19){
		if(z!=18){
			cout<<"0";
			return 0;
		}
	}
	else if(s==20){
		if(z!=22){
			cout<<"0";
			return 0;
		}
	}
	else if(s==22){
		if(z!=20){
			cout<<"0";
			return 0;
		}
	}
	cout<<"1";
	return 0;
}
