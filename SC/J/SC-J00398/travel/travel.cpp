#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int get(char c){
	if('A'<=c&&c<='C')return 1;
	else return 0;
}
int z(char c){
	return c-'A'+1;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			if(get(s1[2])==get(s2[2])){
				if(abs(z(s1[2])-z(s2[2]))==1)cout<<"1111";
				else cout<<"1110";
			}
			else cout<<"1100";
		}
		else cout<<"1000";
	}
	else cout<<"0000";
	return 0;
}