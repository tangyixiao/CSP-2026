#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+5;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"1000";
		return 0;
	}
	int a=s1[2]-'A',b=s2[2]-'A';
//	cout<<a<<" "<<b;
	if((a<=2&&b>2)||(a>2&&b<=2)){
		cout<<"1100";
		return 0;
	}
	if(a<=2&&b<=2&&abs(a-b)!=1){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0; 
} 
