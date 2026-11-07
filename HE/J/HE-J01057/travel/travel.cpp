#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		int x=(s1[0]-'0')*10+(s1[1]-'0');
		int y=(s2[0]-'0')*10+(s2[1]-'0');
		if(x==y){
			if((s1[2]>='D' && s2[2]>='D') || (s1[2]<='C' && s2[2]<='C')){
				if(s1[2]-s2[2]==1 || s2[2]-s1[2]==1) cout<<"1111";
				else cout<<"1110";
			}else cout<<"1100";
		}else cout<<"1000";
	}else cout<<"0000";
    fclose(stdin);
	fclose(stdout);
	return 0;
}

