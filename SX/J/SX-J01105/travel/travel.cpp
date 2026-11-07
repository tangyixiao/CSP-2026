#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	string a,b,c,d;
	cin>>a>>b>>c>>d;
	string s[10]={b};
	string z[10]={d};
		if(a==b)
			cout<<"0";
		else
		if(s[0]==z[0]&&s[1]==z[1])
			cout<<"1";
			cout<<"0";
		else
			cout<<"1";
		if (s[2]=="A"&&z[2]=="B" || s[2]=="A"&&z[2]=="C" || s[2]=="A"&&z[2]=="D" || s[2]=="A"&&z[2]=="F" ||
			z[2]=="A"&&s[2]=="B" || z[2]=="A"&&s[2]=="C" || z[2]=="A"&&s[2]=="D" || z[2]=="A"&&s[2]=="F"  )
		   	cout<<"0";
		else
			cout<<"1";
	if (s[2]=="A"&&z[2]=="B" || s[2]=="B"&&z[2]=="A" || s[2]=="B"&&z[2]=="C"||s[2]=="D"&&z[2]=="F" ||s[2]=="F"&&z[2]=="D")
		cout<<"0";
	else
		cout<<"1";
	fclose(stdin);
	fclose(stdout);
}
