#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool a=false,b=false,c=false;
	if(c1==c2){
		cout<<1;
		a=true;
	}
	else{
		cout<<0;
	}
	if(a&&(s1[0]==s2[0]&&s1[1]==s2[1])){
		cout<<1;
		b=true;
	}
	else{
		cout<<0;
	}
	if((a&&b)&&((s1.back()=='A'&&s2.back()=='B')||(s1.back()=='A'&&s2.back()=='C')||(s1.back()=='B'&&s2.back()=='A')||(s1.back()=='B'&&s2.back()=='C')||(s1.back()=='C'&&s2.back()=='A')||(s1.back()=='C'&&s2.back()=='B')||(s1.back()=='D'&&s2.back()=='F')||(s1.back()=='F'&&s2.back()=='D'))){
		cout<<1;
		c=true;
	}
	else{
		cout<<0;
	}
	if((a&&b&&c)&&((s1.back()=='A'&&s2.back()=='B')||(s1.back()=='B'&&s2.back()=='A')||(s1.back()=='B'&&s2.back()=='C')||(s1.back()=='C'&&s2.back()=='B')||(s1.back()=='D'&&s2.back()=='F')||(s1.back()=='F'&&s2.back()=='D'))){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}