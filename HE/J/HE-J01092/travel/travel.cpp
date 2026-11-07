#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >>c1>>s1>>c2>>s2;
	int a=(c1[0]-'0')*10+c1[1]-'0',b=(c2[0]-'0')*10+c2[1]-'0';
	if(a!=b){
		cout << "0000";
		return 0;
	}
	int a2=(s1[0]-'0')*10+s1[1]-'0',b2=(s2[0]-'0')*10+s2[1]-'0';
	if(a2!=b2){
		cout << "1000";
		return 0;
	}
	int a3=s1[2]-'A'+1,b3=s2[2]-'A'+1;
	if((a3<=3 && b3<=3) || (a3>3 && b3>3)){
		if(abs(a3-b3)==1){
			cout << "1111";
		}else{
			cout <<"1110";
		}
	}else{
		cout <<"1100";
	}
	return 0;
}
