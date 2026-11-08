#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string n=" ",s1,s2,c1,c2;
	cin>>c1;
	cin>>s1;
	cin>>c2;
	cin>>s2;
	if (c1==c2){
		n=n+"1";
	}
	else
		n=n+"000";
	swap(s1,s2);
	if(s1==s2)
		n=n+"0";
	else if(s1>s2)
		n+="111";
	else
		n+="000";		
	cout<<n;
	return 0;
}
