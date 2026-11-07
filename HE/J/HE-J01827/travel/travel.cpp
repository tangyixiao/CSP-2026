#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string x1,x2,y1,y2,s;
	s[0]='0',s[1]='0',s[2]='0',s[3]='0';
	cin>>x1>>x2>>y1>>y2;
	if(x1[0]==y1[0] && x1[1]==y1[1]){
		s[0]='1';
	}else{
		cout<<s[0]<<s[1]<<s[2]<<s[3];
		return 0;
	}
	if(y2[0]==x2[0] && y2[1]==x2[1]){
		s[1]='1';
	}else{
		cout<<s[0]<<s[1]<<s[2]<<s[3];
		return 0;
	}
	if(x2[2]>='A'&&x2[2]<='C'&&y2[2]>='A'&&y2[2]<='C'){
		s[2]='1';
		if((x2[2]-y2[2]==1 || x2[2]-y2[2]==-1)&&s[2]=='1'){
			s[3]='1';
		}
	}
	if(x2[2]>='D'&&x2[2]<='F'&&y2[2]>='D'&&y2[2]<='F'){
		s[2]='1';
		s[3]='1';
	}
	cout<<s[0]<<s[1]<<s[2]<<s[3];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
