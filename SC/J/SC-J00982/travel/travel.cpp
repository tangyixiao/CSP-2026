#include <bits/stdc++.h>
using namespace std;
bool dl1,dl2,dl3,dl4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int s1,s2;
	string c1,c2;
	cin>>s1>>c1>>s2>>c2;
	if(s1==s2){
		dl1=1;
	}
	if(dl1==1 && c1[0]==c2[0] && c1[1]==c2[1]){
		dl2=1;
	}
	if(dl2==1 && (c1[2]=='A' && c2[2]=='B' || c1[2]=='B'&& c2[2]=='C' || c1[2]=='A'&& c2[2]=='C' ||c1[2]=='B' && c2[2]=='A' || c1[2]=='C'&& c2[2]=='B' || c1[2]=='C'&& c2[2]=='A' || c1[2]=='D'&& c2[2]=='F' || c1[2]=='F'&& c2[2]=='D')){
		dl3=1;
	}
	if(dl3==1 && (c1[2]=='A' && c2[2]=='B' || c1[2]=='B'&& c2[2]=='C' ||c1[2]=='B' && c2[2]=='A' || c1[2]=='C'&& c2[2]=='B' || c1[2]=='D'&& c2[2]=='F' || c1[2]=='F'&& c2[2]=='D')){
		dl4=1;
	}
	cout<<dl1<<dl2<<dl3<<dl4;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 