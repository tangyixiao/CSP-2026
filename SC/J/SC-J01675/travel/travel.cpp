#include <bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int a1,a2,b1,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(s1[0]=='0'){
		a1=s1[1]-'0';
		b1=s1[2]-'A'+1;
	}
	else{
		a1=(s1[0]-'0')*10+s1[1]-'0';
		b1=s1[2]-'A'+1;
	}
	if(s2[0]=='0'){
		a2=s2[1]-'0';
		b2=s2[2]-'A'+1;
	}
	else{
		a2=(s2[0]-'0')*10+s2[1]-'0';
		b2=s2[2]-'A'+1;
	}
	int ce1,ce2;
	if (b1==1 || b1==2 || b1==3) ce1=1;
	else ce1=2;
	if (b2==1 || b2==2 || b2==3) ce2=1;
	else ce2=2;
	bool ans1,ans2,ans3,ans4;
	ans1=(c1==c2);
	ans2=ans1 && (a1==a2);
	ans3=ans2 && (ce1==ce2);
	ans4=ans3 && (b1==b2-1 || b1-1==b2);
	cout<<ans1<<ans2<<ans3<<ans4;
	return 0;
}