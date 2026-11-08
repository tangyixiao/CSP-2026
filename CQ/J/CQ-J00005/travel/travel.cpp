#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,ans; 
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(stoi(c1)==stoi(c2)) ans+="1";
	else ans+="0";
	if(ans[0]=='1'&&stoi(s1.substr(0,2))==stoi(s2.substr(0,2))) ans+="1";
	else ans+="0";
	char a=s1[2],b=s2[2];
	if(ans[1]=='1'&&a-'A'<=2&&b-'A'<=2||a-'A'>2&&b-'A'>2) ans+="1";
	else ans+="0";
	if(ans[2]=='1'&&abs(b-a)==1) ans+="1";
	else ans+="0";
	cout<<ans<<"\n";
	
	return 0;
}
/*
02 01A 02 01B
*/
