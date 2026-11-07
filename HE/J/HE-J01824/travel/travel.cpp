#include  <bits/stdc++.h>
using namespace std;
int a[19];
int flag=0;
char b[6];
int main(){
	freopen("travel.in","r",stdin);
		freopen("travel.out","w",stdout);
int c1,c2;
cin>>c1;
char s1[3];
char s2[3];
	for(int i=0;i<=2;i++){
		cin>>s1[i];
	}
	cin>>c2;
	for(int i=0;i<=2;i++){
		cin>>s2[i];
	}
	if(c1==c2){
		cout<<"1";
	}	else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<"1";
		 flag=1;
	}else{
		cout<<"0";
	}
		if(flag==1&&s1[2]<='C'&&s2[2]<='C'||'C'<s1[2]&&s1[2]<='F'&&'C'<s2[2]&&s2[2]<='F'&&flag==1){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	int k=(s1[2]-48)-(s2[2]-48);
	if(abs(k)!=1){
		cout<<"0";
	}else{
		cout<<"1";
	}
	return 0;
}
