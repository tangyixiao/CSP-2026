#include<bits/stdc++.h>
using namespace std;
string s1,s2,st1,st2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>st1>>s2>>st2;
	if(s1!=s2){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(st1[0]!=st2[0] || st1[1]!=st2[1]){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if(!((st1[2]=='A' || st1[2]=='B' || st1[2]=='C')&&(st2[2]=='A' || st2[2]=='B' || st2[2]=='C'))&&!((st1[2]=='D' || st1[2]=='F')&&(st2[2]=='D' || st2[2]=='F'))){
		cout<<"00";
		return 0;
	}
	cout<<1;
	if(st1[2]<='C'&&st2[2]<='C'){
		if(st1[2]==st2[2]+1 || st1[2]==st2[2]-1){
			cout<<1;
			return 0;
		}
		else cout<<"0";
	}
	else cout<<1;
	
	fclose(stdin);fclose(stdout);
	return 0;
}