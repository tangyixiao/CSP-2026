#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool ce1 = (s1[2] - 'A') < 3 ? 1 : 0;
	bool ce2 = (s2[2] - 'A') < 3 ? 1 : 0;
	if(c1 == c2) cout<<1;
	else cout<<0;
	if(s1[0] + s1[1] == s2[0] + s2[1] && c1 == c2) cout<<1;
	else cout<<0;
	if(!(ce1 ^ ce2) && s1[0] + s1[1] == s2[0] + s2[1] && c1 == c2) cout<<1;
	else cout<<0;
	if(!(ce1 ^ ce2) && s1[0] + s1[1] == s2[0] + s2[1] && abs(s1[2] - s2[2]) <= 1 && c1 == c2) cout<<1;
	else cout<<0;
	return 0;
}
