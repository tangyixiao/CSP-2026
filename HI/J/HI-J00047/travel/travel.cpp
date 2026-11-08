#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int a=0,b=0,c=0,d=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)a=1;
	if(s1[0]==s2[0]&&s1[1]==s2[1])b=1;
	if(s1[2]+s2[2]>=137||s1[2]+s2[2]<=133)c=1;
	if(s1[2]+1==s2[2]||s1[2]-1==s2[2])d=1;
	
	
	if(a==1)cout<<1;else{cout<<"0000";return 0;}
	if(b==1)cout<<1;else{cout<<"000";return 0;}
	if(c==1)cout<<1;else{cout<<"00";return 0;}
	if(d==1)cout<<1;else{cout<<"0";return 0;}
	return 0;
}
