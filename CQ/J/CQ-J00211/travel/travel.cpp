#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string n1,n2,m1,m2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n1>>n2>>m1>>m2;
	if(n1!=m1){
		cout<<"0000";
		return 0;
	}
	else if(n2[0]!=m2[0]||n2[1]!=m2[1]){
		cout<<"1000";
		return 0;
	}else if((n2[2]<='C'&&n2[2]>='A')&&(m2[2]<='F'&&m2[2]>='D')||
	(n2[2]<='D'&&n2[2]>='F')&&(m2[2]<='A'&&m2[2]>='C')){
		cout<<"1100";
		return 0;
	}else if(abs(n2[2]-m2[2])!=1){
		cout<<"1110";
		return 0;
	}else{
		cout<<"1111";
	}
	return 0;
}
