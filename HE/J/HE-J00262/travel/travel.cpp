#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	bool i=(a2[2]>'C');
	bool j=(b2[2]>'C');
	if(a1!=b1) cout<<"0000";
	else if(a2[0]!=b2[0]||a2[1]!=b2[1]) cout<<"1000";
	else if(i!=j) cout<<"1100";
	else if(abs(a2[2]-b2[2])==1) cout<<"1111";
	else cout<<"1110";
	return 0;
}
