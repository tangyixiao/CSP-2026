#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			char a=s1[2],b=s2[2];
			if(('A'<=a && a<='C' && 'A'<=b && b<='C') || ((a=='D' || a=='F') && (b=='D' || b=='F'))){
				if((a=='A' && b=='B') || (a=='B' && b=='A') || (a=='B' && b=='C') || (a=='C' && b=='B') || (a=='D' && b=='F') ||(a=='F' && b=='D')){
					cout<<"1111";
				}else cout<<"1110";
			}else cout<<"1100";
		}else cout<<"1000";
	}else cout<<"0000";
	return 0;
}
