#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int ans[100];
	ans[65]=1;
	ans[66]=1;
	ans[67]=1;
	ans[68]=2;
	ans[70]=2;
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
		cout<<"1";
	else
		cout<<"0";
	if(s1[0]+s1[1]==s2[0]+s2[1] and c1==c2)
		cout<<"1";		
	else
		cout<<"0";
	if(ans[int(s1[2])]==ans[int(s2[2])] and s1[0]+s1[1]==s2[0]+s2[1] and c1==c2)
		cout<<"1";			
	else
		cout<<"0";
	if(abs(s1[2]-s2[2])==1 and ans[int(s1[2])]==ans[int(s2[2])] and s1[0]+s1[1]==s2[0]+s2[1] and c1==c2)
		cout<<"1";
	else
		cout<<"0";
	return 0;
}

