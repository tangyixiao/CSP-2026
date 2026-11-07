#include<bits/stdc++.h>
using namespace std;
char s[15];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=10;i++){
		cin>>s[i];
	}
	if(s[1]==s[6]&&s[2]==s[7]){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(s[3]==s[8]&&s[4]==s[9]){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if(s[5]<='C'&&s[10]<='C'){
		cout<<1;
	}else if(s[5]>'C'&&s[10]>'C'){
		cout<<11;
		return 0;
	}else{
		cout<<"00";
		return 0;
	}
	if(s[5]==s[10]+1||s[5]==s[10]-1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}