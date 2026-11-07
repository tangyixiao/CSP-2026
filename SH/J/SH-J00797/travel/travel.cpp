#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool flag1=(c1==c2);
	int s_1=(int)(s1[0]-'0')*10+(int)(s1[1]-'0');
	int s_2=(int)(s2[0]-'0')*10+(int)(s2[1]-'0');
	bool flag2=((s_1==s_2)&&flag1);
	char ss1=s1[2];
	char ss2=s2[2];
	bool flag3;
	if(flag2){
		if(ss1=='A'){
			if(ss2=='B'||ss2=='C') flag3=1;
			else flag3=0;
		}
		else if(ss1=='B'){
			if(ss2=='A'||ss2=='C') flag3=1;
			else flag3=0;
		}
		else if(ss1=='C'){
			if(ss2=='A'||ss2=='C') flag3=1;
			else flag3=0;
		}
		else if(ss1=='D'){
			if(ss2=='E') flag3=1;
			else flag3=0;
		}
		else if(ss1=='E'){
			if(ss2=='D') flag3=1;
			else flag3=0;
		}
	}
	else flag3=0;
	bool flag4;
	if(flag3){
		if(ss1=='A'){
			if(ss2=='B') flag4=1;
			else flag4=0;
		}
		else if(ss1=='B'){
			if(ss2=='A'||ss2=='C') flag4=1;
			else flag4=0;
		}
		else if(ss1=='C'){
			if(ss2=='B') flag4=1;
			else flag4=0;
		}
		else if(ss1=='D'){
			if(ss2=='E') flag4=1;
			else flag4=0;
		}
		else if(ss1=='E'){
			if(ss2=='D') flag4=1;
			else flag4=0;
		}
	}
	else flag4=0;
	cout<<flag1<<flag2<<flag3<<flag4;
	return 0;
} 
