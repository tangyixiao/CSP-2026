#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,an;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		an="1";
		char a1=s1[0]+s1[1],a2=s2[0]+s2[1];
		if(a1==a2){
			an="1";
			if ((s1[2]>='D' && s2[2]>='D') || (s1[2]<='C' && s2[2]<='C')){
			an="1";
			int w=s1[2],w2=s2[2];
				if (abs(w-w2)==1){
					an="1";
					}else an="1";
		}
		else an="00";
		}
		else an="0000";
	}
	else an="0000";
	cout<<an;
	return 0;
}

