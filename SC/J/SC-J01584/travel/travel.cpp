#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)  cout<<1;
	else cout<<0;
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1])  cout<<1;
	else cout<<0;
	bool g1=(s1[2]-'A'+1)>=4;
	bool g2=(s2[2]-'A'+1)>=4;
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&g1==g2) cout<<1;
	else cout<<0;
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&g1==g2&&abs(s1[2]-s2[2])==1)cout<<1;
	else cout<<0;
	fclose(stdin);fclose(stdout);
	return 0;
}