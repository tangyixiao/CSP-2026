#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
signed main(){
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	char x=s1[2],y=s2[2];
	if(x>y)swap(x,y);
	if(y=='F')y--;
	if(c1!=c2)cout<<"0000";
	else if(s1[0]!=s2[0]||s1[1]!=s2[1])
		cout<<"1000";
	else if(x<'D'&&'D'<=y)cout<<"1100";
	else if(y-x!=1)cout<<"1110";
	else cout<<"1111";
	return 0;
}
