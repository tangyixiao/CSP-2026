#include<bits/stdc++.h>
#define int long long
#define inf 0x3f3f3f3f3f3f3f3f
#define Code ios::sync_with_stdio(0);
#define by cin.tie(0);
#define Co_led cout.tie(0);
#define VNAME(x) #x
#define C(x) cout<<VNAME(x)<<":"<<x<<endl;
using namespace std;
int zu(char a){
	if(a=='A'||a=='B'||a=='C'){
		return 1;
	}else{
		return 2;
	}
}
int zhi(char a){
	if(a=='A'){
		return 1;
	}else if(a=='B'){
		return 2;
	}else if(a=='C'){
		return 3;
	}else if(a=='D'){
		return 5;
	}else{
		return 6;
	}
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	Code by Co_led
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
	}else if(s1.substr(0,2)!=s2.substr(0,2)){
		cout<<"1000";
	}else if(zu(s1[2])!=zu(s2[2])){
		cout<<"1100";
	}else if(abs(zhi(s1[2])-zhi(s2[2]))!=1){
		cout<<"1110";
	}else{
		cout<<"1111";
	}
	return 0;
}//100
