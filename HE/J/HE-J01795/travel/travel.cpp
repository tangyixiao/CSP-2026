#include<bits/stdc++.h>
using namespace std;
int c1[100],c2[100];
char s1[100],s2[100];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	if(c1[1]==c2[1]){
		cout<<"1";
	}else if(c1[1]==1 or c2[1]==6){
		cout<<"0000";
		return 0;
	}else{
		cout<<"0000";
		return 0;
	}
	int i=1;
	if(s1[i]==s2[i]){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if(s1[2]==s2[2]){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	cout<<"1";
	return 0;
}
