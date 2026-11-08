#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sycn_with_stdio_(false);cin.tie(0);cout.tie(0);
	string C1,S1,C2,S2;
	for(int i=0;i<2;i++)cin>>C1[i];
	for(int i=0;i<3;i++)cin>>S1[i];	
	for(int i=0;i<2;i++)cin>>C2[i];
	for(int i=0;i<3;i++)cin>>S2[i];
	int d=0;
	for(int i=0;i<2;i++){
		if(C1[i]==C2[i])d++;
		
	}
	if(d==2){
		cout<<"1";
		int a=0;
		for(int i=0;i<2;i++){
			if(S1[i]==S2[i])a++;	
		}
		if(a==2){
		cout<<"1";
		int b=0;
		for(int i=0;i<3;i++){
			if(S1[2]=='A'&&S2[2]=='B'||S1[2]=='A'&&S2[2]=='C'||S1[2]=='B'&&S2[2]=='A'||S1[2]=='B'&&S2[2]=='C'||S1[2]=='C'&&S2[2]=='A'||S1[2]=='C'&&S2[2]=='B'||S1[2]=='D'&&S2[2]=='F'||S1[2]=='F'&&S2[2]=='D')b++;
		}
		if(b==3){
			cout<<"1";
			int c=0;		
			for(int i=0;i<3;i++){
				if(S1[2]=='A'&&S2[2]=='B'||S1[2]=='B'&&S2[2]=='A'||S1[2]=='C'&&S2[2]=='B'||S1[2]=='B'&&S2[2]=='C'||S1[2]=='D'&&S2[2]=='F'||S1[2]=='F'&&S2[2]=='D')c++;
			}
			if(c==3)cout<<"1";
			else cout<<"0";
		}
		else cout<<"00";
	}
	else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
