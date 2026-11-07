#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,s,d,f,k="";
	cin>>a>>s>>d>>f;
	if(a==d) k+='1';
	else k+='0';
	if(k[0]!='0'&&s[0]==f[0]&&s[1]==f[1]) k+='1';
	else k+='0';
	if(k[1]!='0'&&(s[2]<='C'&&f[2]<='C')||(s[2]>'D'&&f[2]>'D')) k+='1';
	else k+='0';
	if(k[2]!='0'&&abs(int(s[2])-int(f[2]))==1) k+='1';
	else k+='0';
	cout<<k;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
