#include<bits/stdc++.h>
using namespace std;
string a[5]={"0","0","0","0","0"};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) a[1]="1";
	if(a[1]=="1"&&c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]) a[2]="1";
	if((s1[2]=='C'||s1[2]=='D')&&(s2[2]=='C'||s2[2]=='D')) a[3]="0";
	else{
		if(s1[2]-s2[2]==-1||s1[2]-s2[2]==-2||s1[2]-s2[2]==-3||s1[2]-s2[2]==1||s1[2]-s2[2]==2){
			a[3]="1";
		} 
	}
	
	if(a[3]=="1"&&(s1[2]-s2[2]==1||s1[2]-s2[2]==-1)) a[4]="1";
	cout<<a[1]<<a[2]<<a[3]<<a[4];
	return 0;
}
