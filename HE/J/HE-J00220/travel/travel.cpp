#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;bool pd1=0,pd2=0,pd3=0,pd4=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		pd1=1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		pd2=1;
	}
	else{
		cout<<"1000";
		return 0;
	}
	if(((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))){
		pd3=1;
	}
	else{
		cout<<"1100";
		return 0;
	}
	if(abs((int)(s1[2]-s2[2]))==1){
		pd4=1;
	}
	else{
		cout<<"1110";
		return 0;
	}
	cout<<pd1<<pd2<<pd3<<pd4;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
