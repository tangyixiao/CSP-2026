#include<bits/stdc++.h>
using namespace std;
bool check(char a,char b){
	if((a<='C'&&b<='C')||(a>='D'&&b>='D')){
		return 1;
	}else{
		return 0;
	}
}
bool check2(char a,char b){
	if(a<='C'&&b<='C'){
		if(a=='A'&&b=='B'){
			return 1;
		}
		else if(a=='B'){
			return 1;
		}else if(a=='C'&&b=='B'){
			return 1;
		}else{
			return 0;
		}
	}
	else if(a>='D'&&b>='D'){
		return 1;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,ans="";
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		ans="0000";
	}else{
		if(s1[0]==s2[0]&&s1[1]==s2[1]){//同一排 
			if(check(s1[2],s2[2])){//同侧 
				if(check2(s1[2],s2[2])){//相邻 
					ans="1111";
				}else{
					ans="1110";
				}
			}else{	
				ans="1100";
			}
		}else{
			ans="1000";
		}
	}
	cout<<ans;
	return 0;
} 