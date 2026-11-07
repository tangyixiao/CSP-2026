#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<utility>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<map>
#include<set>
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,b1,a2,b2;
	cin>>a1>>b1>>a2>>b2;
	if(a1!=a2){
		cout<<"0000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}else if(b1.substr(0,2)!=b2.substr(0,2)){
		cout<<"1000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}else if(b1[2]-'A'<3&&b2[2]-'A'>=3||b2[2]-'A'<3&&b1[2]-'A'>=3){
		cout<<"1100";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}else if(b1[2]-'A'<3&&abs(b1[2]-b2[2])!=1){
		cout<<"1110";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	cout<<"1111";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
