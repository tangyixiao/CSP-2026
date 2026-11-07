#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string s11,s22;
	s11+=s1[0];s11+=s1[1];
	s22+=s2[0];s22+=s2[1];
	int ans1=0,ans2=0,ans3=0,ans4=0;
	if(c1==c2){
		ans1=1;
		
		if(s22==s11) ans2=1;
		char a=s1[2];
		char b=s2[2];
		
		if(a<='C' && b<='C' && ans2) ans3=1;
		else if(a>='D' &&b>='D' && ans2){
			ans3=1;
		}
		if(abs(a-b)==1&& ans3) ans4=1;
	}
	cout<<ans1<<ans2<<ans3<<ans4;
	return 0;
} 
