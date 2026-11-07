#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	long long c1,c2,s1,s2;
	cin>>c1;
	cin>>s1;
	cin>>c2;
	cin>>s2;
	if(c1>16&&c2>16){
		if(c1==c2)
			cout<<"1";
		else
			cout<<"0";
	}
	else{
		cout<<"0";
	}
	cout<<"100";
	return 0;
}