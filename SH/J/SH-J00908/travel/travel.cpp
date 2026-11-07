#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int ans=0;
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else{
		ans++;
		cout<<0<<0<<0<<0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&ans==0)cout<<1;
	else if(ans==0){
		ans++;
		cout<<0<<0<<0;
	}
	if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')&&ans==0)cout<<1;
	else if((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F')&&ans==0)cout<<1;
	else if(ans==0){
		ans++;
		cout<<0<<0;
	}
	if(s1[2]=='A'&&s2[2]=='B'&&ans==0)cout<<1;
	else if(s1[2]=='B'&&(s2[2]=='A'||s2[2]=='C')&&ans==0)cout<<1;
	else if(s1[2]=='C'&&s2[2]=='B'&&ans==0)cout<<1;
	else if(s1[2]=='D'&&s2[2]=='F'&&ans==0)cout<<1;
	else if(s1[2]=='F'&&s2[2]=='D'&&ans==0)cout<<1;
	else if(ans==0)cout<<0;
	return 0;
} 
