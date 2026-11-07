#include<bits/stdc++.h>
#define int long long
using namespace std;
string a1,a3,a4,b1,b3,b4;
string a2,b2;
bool check(string a,string b){
	int x,y;
	x=a[0]-'A'+1;
	y=b[0]-'A'+1;
	if(x>3)x==1;
	else x=0;
	if(y>3)y==1;
	else y=0;
	if(x==y){
		return 1;
	}
	else return 0;
}
bool checkll(string a,string b){
	int x,y;
	x=a[0]-'A';
	y=b[0]-'A';
	if(x-y==1 || y-x==1 ){
		return true;
	}
	else return false;
}
signed main()
{
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	cin >> a1 >> a2 >> b1 >> b2;
	a4=a2[2];
	b4=b2[2];
	a3+=a2[0];
	a3+=a2[1];
	b3+=b2[0];
	b3+=b2[1];
	bool flag=0;
	if(a1!=b1){
		cout << "0000";
		return 0;
	}
	else cout << "1";
	if(a3!=b3){
		cout << "000";
		return 0;
	}
	else cout << "1";
	if(!check(a4,b4)){
		cout << "00";
		return 0;
	}
	else cout << "1"; 
	if(checkll(a4,b4))cout << "1";
	else cout << "0";
	return 0;
} 
