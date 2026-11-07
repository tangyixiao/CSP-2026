#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<'1';
		string S1,S2;
		S1=s1[0]+s1[1],S2=s2[0]+s2[1];
		if(S1==S2){
			cout<<'1';
			char a=s1[2],b=s2[2];
			if((a>='A' and a<='C' and b>='A' and b<='C') or (a>='D' and a<='F' and b>='D' and b<='F')){
				cout<<'1';
				if(abs(a-b)==1 or (a=='D' and b=='F') or (a=='F' and b=='D'))cout<<'1';
				else cout<<'0';
			}else cout<<"00";
		}
		else cout<<"000";
	}else cout<<"0000";
	fclose(stdin);fclose(stdout);
	return 0;
}
