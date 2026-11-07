#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string c1,s1,c2,s2;
ll n1,n2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	n1=(c1[0]-'0')*10+(c1[1]-'0');
	n2=(c2[0]-'0')*10+(c2[1]-'0');
	if(n1!=n2){
		cout<<"0000";
		return 0;
	}
	n1=(s1[0]-'0')*10+(s1[1]-'0');
	n2=(s2[0]-'0')*10+(s2[1]-'0');
	if(n1!=n2){
		cout<<"1000";
		return 0;
	}
	n1=s1[2]-'A';
	n2=s2[2]-'A';
	ll fl=0;
	if(n1>2&&n2>2)fl=1;
	if(n1<3&&n2<3)fl=1;
	if(!fl){
		cout<<"1100";
		return 0;
	}
	if((n1==0&&n2==2)||(n1==2&&n2==0))cout<<"1110";
	else cout<<"1111";
	return 0;
}
