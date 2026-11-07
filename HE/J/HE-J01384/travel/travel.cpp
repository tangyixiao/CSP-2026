#include<bits/stdc++.h>
using namespace std;
int main(){
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	//string c1,s1,c2,s2;
	int same =0;//同一车厢 
	int same2=0;//同一排 
	//cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){//是否同一车厢 1
		cout << 1;
		same =1;
	}
	else{
		cout << 0;
	}
	if(s1[0]+s1[1]==s2[0]+s2[1]){
		if(same==1){
			cout <<1;
			same2=1;
		}
		else{
			cout <<0;
		}
	}
	if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='A'&&s2[2]=='C')){//((((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='A'&&s2[2]=='C'))||((s1[2]=='B'&&s2[2]=='C')(s1[2]=='B'&&s2[2]=='A')))||(((s1[2]=='C'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='B'))||((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')))){
		if(same2==1){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	if((((s1[2]-'0')-(s2[2]-'0')==1)||((s1[2]-'0')-(s2[2]-'0')==-1))&&same==1){
		cout <<1;
	}
	else{
		if(((s1[2]=='D')&&(s1[2]=='F')||(s1[2]=='F')&&(s1[2]=='D'))&&same==1){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
