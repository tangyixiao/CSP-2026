#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool res[4];
int main(){
	freopen(travel.in,"r",stdin);
	freopen(travel.out,"w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0]&&c1[1]==c2[1]){
		res[0]=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			res[1]=1;
			char a=s1[2],b=s2[2];
			if((a>='D'&&b>='D')||(a<='C'&&b<='C')){
				res[2]=1;
				if(abs(a-b)==1){
					res[3]=1;
				}
			}
		}
	}
	cout<<res[0]<<res[1]<<res[2]<<res[3];
	return 0;
}