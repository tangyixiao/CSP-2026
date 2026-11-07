#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,ans;
bool cmps(string x,string y){
	for(int i=0;i<2;i++){
		if(x[i]!=y[i]) return false;
	}
	return true;
}
bool cmpc(string x,string y){
	if(x[2]<='C' && y[2]<='C') return true;
	if(x[2]>'C' && y[2]>'C') return true;
	return false;
}
bool cmpl(string x,string y){
	if(x[2]+1==y[2]) return true;
	if(y[2]+1==x[2]) return true;
	return false;
}
bool cmp1,cmp2,cmp3,cmp4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >>c1>>s1>>c2>>s2;
	if(c1==c2){
		cmp1=1;
		if(cmps(s1,s2)){
			cmp2=1;
			if(cmpc(s1,s2)){
				cmp3=1;
				if(cmpl(s1,s2)){
					cmp4=1;
				}
			}
		}
	}
	if(cmp1) ans+="1";
	else ans+="0";
	if(cmp2) ans+="1";
	else ans+="0";
	if(cmp3) ans+="1";
	else ans+="0";
	if(cmp4) ans+="1";
	else ans+="0";
	cout <<ans;
	return 0;
}
