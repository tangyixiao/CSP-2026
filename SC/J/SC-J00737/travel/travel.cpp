#include <bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
char r,x;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
		cout<<"1";
	else{
		cout<<"0000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1])
		cout<<"1";
	else{
		cout<<"000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	r=s1[2],x=s2[2];
	if (((int)r+(int)x)<135||((int)r+(int)x)>135)
		cout<<"1";
	else{
		cout<<"00";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(abs((int)r-(int)x)==1&&((int)r+(int)x)!=135)
		cout<<"1";
	else
		cout<<"0";
	fclose(stdin);
	fclose(stdout);
	return 0;
}