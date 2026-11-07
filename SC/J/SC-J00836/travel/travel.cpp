#include<bits/stdc++.h>
using namespace std;
bool f1,f2,f3;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		f1=1;
	}
	else cout<<0;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&f1){
		cout<<1;
		f2=1;
	}
	else cout<<0;
	if(((int(s1[2])<=67&&int(s2[2]<=67))||(int(s1[2])>=68)&&(int(s2[2])>=68))&&f2){
		cout<<1;
		f3=1;
	}
	else cout<<0;
	if(abs(int(s1[2])-int(s2[2]))==1&&f3)cout<<1;
	else cout<<0;
	return 0;
} 