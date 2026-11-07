#include<bits/stdc++.h>
using namespace std;
int tongce(string s){
	int a;
	if(s[2]=='A'||s[2]=='B'||s[2]=='C') a=1;
	else if(s[2]=='D'||s[2]=='E') a=2;
	return a;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int chexiang=0,pai=0,ce=0,xianglin=0;
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	
	if(c1==c2) chexiang=1;
	else chexiang=0;
	if(chexiang==1){
	if(s1[0]==s2[0]&&s1[1]==s2[1]) pai=1;
	else pai=0;
		if(pai==1){
			if(tongce(s1)==tongce(s2)) ce=1;
			else ce=0;
			if(ce==1){
				if(s1[2]==char(s2[2]-1)||s1[2]==char(s2[2]+1)) xianglin=1;
				else xianglin=0;
			}
		}
	}
	cout<<chexiang<<pai<<ce<<xianglin;
	return 0;
}