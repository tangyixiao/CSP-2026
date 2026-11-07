#include<iostream>
#include<string>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>c2>>s1>>s2;
	if(c1==s1){
		cout<<1;
		if(c2[0]==s2[0]&&c2[1]==s2[1]){
			cout<<1;
			if(((c2[2]=='A'||c2[2]=='B'||c2[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||((c2[2]=='D'||s2[2]=='F')&&s2[2]=='D'||s2[2]=='F')) cout<<1;
			else cout<<0;
		}
		else {
		cout<<0;
		cout<<0;
		}
	} 
	else{
		cout<<0;
		cout<<0;
		cout<<0;
	}
	if((c2[2]-s2[2]==1||c2[2]-s2[2]==-1)&&(c1==s1)&&c2[0]==s2[0]&&c2[1]==s2[1]&&(s2[2]!='C'&&c2[2]!='D')&&(s2[2]!='D'&&c2[2]!='C')) cout<<1;
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
