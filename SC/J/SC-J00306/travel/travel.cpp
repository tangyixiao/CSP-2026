#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1;
	cin>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	} 
	else
		cout<<"1";
	if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"000";
		return 0;
	} 
	else
		cout<<"1";
	if((s1[2]<='C'&&s2[2]>='D')||(s1[2]>='D'&&s2[2]<='C')){
		cout<<"00";//244566
		return 0; 
	}
	else{
		cout<<1;
	}
	int t=s2[2]-s1[2];
	if(t==1||t==-1)
		cout<<1;
	else
		cout<<"0";
	fclose(stdin);
	fclose(stdout); 
	return 0;
} 