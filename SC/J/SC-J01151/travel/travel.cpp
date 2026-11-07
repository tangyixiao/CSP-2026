#include<bits/stdc++.h>
using namespace std;
string s1,s2,c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) cout<<"0000";
	else{
		bool flg1=0,flg2=0;
		for(int i=0;i<s1.size();i++){
			if((i==0||i==1)&&(s1[i]!=s2[i])) flg1=1;
			if(i==2)
				if((s1[i]<='C'&&s2[i]>='D')||(s1[i]>='D'&&s2[i]<='C'))
					flg2=1;
		}
		if(flg1) cout<<"1000";
		else{
			if(flg2) cout<<"1100";
			else{
				if(abs(s1[2]-s2[2])>1){
					if((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')) cout<<"1111";
					else cout<<"1110";
				}
				else cout<<"1111";
			}
		}
	}
	return 0;
}