#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int ans1,ans2,ans3,ans4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	c1=" "+c1;
	c2=" "+c2;
	s1=" "+s1;
	s2=" "+s2;
	if(c1[1]==c2[1]&&c1[2]==c2[2])
		ans1=1;
	if(ans1==0){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(s1[1]==s2[1]&&s1[2]==s2[2])
		ans2=1;
	if(ans2==0){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if((s1[3]<='C'&&s2[3]<='C')||(s1[3]>='D'&&s2[3]>='D'))
		ans3=1;
	if(ans3==0){
		cout<<"00";
		return 0;
	}
	cout<<1;
	if((abs(s1[3]-s2[3])==1))
		cout<<1;
	else
		cout<<0;
	return 0;
} 
