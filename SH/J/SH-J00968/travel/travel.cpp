//T1 AC 25/25
#include <bits/stdc++.h>
using namespace std;
int c1,c2,s1,s2,l1,l2;    //c1,c2:车厢 s1,s2:排 l1,l2:座号(ABC DF)
int f1,f2,f3,f4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s,t;
	cin>>c1>>s>>c2>>t;
	if(s[2]=='D') s[2]='E';    //D转E,方便操作 
	l1=int(s[2]-'A');
	s1=10*int(s[0]-'0')+int(s[1]-'0');
	if(t[2]=='D') t[2]='E'; 
	l2=int(t[2]-'A');
	s2=10*int(t[0]-'0')+int(t[1]-'0');
	if(c1==c2){
		f1=1;
		if(s1==s2){
			f2=1;
			if((0<=l1&&l1<=2&&0<=l2&&l2<=2)
			||(4<=l1&&l1<=5&&4<=l2&&l2<=5)){
				f3=1;
				if(abs(l1-l2)==1) f4=1;
			}
		}
	}
	cout<<f1<<f2<<f3<<f4;
	return 0;
}
