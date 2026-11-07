#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,a1,a2,a3,a4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		a1="1";
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			a2="1";
			if((s1[2]=='D' && s2[2]=='E') || (s1[2]=='E' && s2[2]=='D')){
				a3="1";
				a4="1";
			}
			else if(s1[2]>='A' && s1[2]<='C' && s2[2]>='A' && s2[2]<='C'){
				a3="1";
				if(s2[2]==s1[2]+1 || s2[2]==s1[2]-1) a4="1";
				else a4="0";
			}
			else{
				a3="0";
				a4="0";
			}
		}	
		else{
			a2="0";	
			a3="0";
			a4="0";
		}
	}
	else{
		a1="0";
		a2="0";
		a3="0";
		a4="0";
	}
	cout<<a1<<a2<<a3<<a4<<endl;
	return 0;
}
