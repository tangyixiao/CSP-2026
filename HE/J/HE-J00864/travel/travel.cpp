#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	string c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int sameside=0;
	int samecolumn=0;
	int samecar=0;
	int nextto=0;
	if(c1==c2){
		samecar=1;
		if((s1[0]+s1[1])==(s2[0]+s2[1])){
			samecolumn=1;
			if(s1[2]=='A'){
				if(s2[2]=='B'||s2[2]=='C'){
					sameside=1;
				}
			}else if(s1[2]=='B'){
				if(s2[2]=='A'||s2[2]=='C'){
					sameside=1;
				}
			}else if(s1[2]=='C'){
				if(s2[2]=='A'||s2[2]=='B'){
					sameside=1;
				}
			}else if(s1[2]=='D'){
				if(s2[2]=='F'){
					sameside=1;
				}
			}else if(s1[2]=='F'){
				if(s2[2]=='D'){
					sameside=1;
				}
			}
			if(sameside){
				if(abs(s1[2]-s2[2])==1||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'||s1[2]=='D'))nextto=1;
			}
		}
	}
	cout<< samecar ? 1 : 0;
	cout<< samecolumn ? 1 : 0;
	cout<< sameside ? 1 : 0;
	cout<< nextto ? 1 : 0;
	return 0;
}
