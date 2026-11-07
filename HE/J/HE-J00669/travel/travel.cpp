#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","w",stdin);
	freopen("travel.out","r",stdout);
	int a,b,d1=0,d2=0,d3=0,d4=0;
	string s1,s2;
	cin>>a>>s1>>b>>s2;
	if(a==b){
		d1=1;
		if(s1[0]==s2[0]&&s1[1]==s1[1]){
			d2=1;
			if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='A'&&s2[2]=='C')||(s2[2]=='A'&&s1[2]=='B')||(s2[2]=='B'&&s1[2]=='C')||(s2[2]=='D'&&s1[2]=='F')||(s2[2]=='A'&&s1[2]=='C')){
				d3=1;
				if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='D'&&s2[2]=='F')||(s2[2]=='A'&&s1[2]=='B')||(s2[2]=='B'&&s1[2]=='C')||(s2[2]=='D'&&s1[2]=='F')){
					d4=1;
				}
			}
		}
	}
	cout<<d1<<d2<<d3<<d4;
	return 0;
	fclose(stdin);
	fclose(stdout);
} 
