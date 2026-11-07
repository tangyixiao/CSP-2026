#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0] && c1[1]==c2[1]){
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			int pos1=s1[2]-'A',pos2=s2[2]-'A';
			if((pos1<=2 && pos2<=2) || (pos1>=3 && pos2>=3)){
				if(pos1>pos2) swap(pos1,pos2);
				if(pos1==3) cout<<"1111";
				else if(pos1+1==pos2) cout<<"1111";
				else cout<<"1110";
			}
			else cout<<"1100";
		}
		else cout<<"1000";
	}
	else cout<<"0000";
	return 0;
}
