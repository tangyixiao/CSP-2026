#include<bits/stdc++.h> 
#define int long long
#define pii pair<int,int> 
using namespace std;
string c1,c2,s1,s2;
//100pts
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	string r1=s1.substr(0,2);
	string r2=s2.substr(0,2);
	if(r1==r2){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	int n1=s1[2]-'A';
	int n2=s2[2]-'A';
	if((n1<=2&&n2<=2)||(n1>=3&&n2>=3)){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	if(abs(n1-n2)==1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}