#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s1,s2,c1,c2;
ll a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";return 0;
	}
	cout<<"1";
	a=10*s1[0]+s1[1];
	b=10*s2[0]+s2[1];
	if(a!=b){
		cout<<"000";return 0;
	}
	cout<<"1";
	c=s1[2]-'A'+1;
	d=s2[2]-'A'+1;
	if(c==6) c=5;
	if(d==6) d=5;
	if((c>=4&&d<4)||(c<4&&d>=4)){
		cout<<"00";return 0;
	}
	cout<<"1";
	if((c-d==1)||(d-c==1)){
		cout<<"1";return 0;
	}
	cout<<"0";
	return 0;
} 