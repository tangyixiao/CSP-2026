#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int ans1,ans2,ans3,ans4;
	if(c1==c2){ans1=1;}
	else{
		ans1=0;
	}
	if(s1[0]+s1[1]==s2[0]+s2[1]&&ans1==1){
		ans2=1;
	}
	else{
		ans2=0;
	}
	if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')&&ans2==1){
		ans3=1;
	}
	else if((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F')&&ans2==1){
		ans3=1;
	}
	else{
		ans3=0;
	}
	int tmp1,tmp2;
	if(s1[2]=='A'){
		tmp1=1;
	} 
	if(s1[2]=='B'){
		tmp1=2;
	} 
	if(s1[2]=='C'){
		tmp1=3;
	} 
	if(s1[2]=='D'){
		tmp1=4;
	} 
	if(s1[2]=='F'){
		tmp1=5;
	} 
	if(s2[2]=='A'){
		tmp2=1;
	} 
	if(s2[2]=='B'){
		tmp2=2;
	} 
	if(s2[2]=='C'){
		tmp2=3;
	} 
	if(s2[2]=='D'){
		tmp2=4;
	} 
	if(s2[2]=='F'){
		tmp2=5;
	} 
	if((tmp1==tmp2-1||tmp1==tmp2+1)&&ans3==1){
		ans4=1;
	}
	else{
		ans4=0;
	}
	cout<<ans1<<ans2<<ans3<<ans4;
	return 0;
}
