#include<bits/stdc++.h> 
using namespace std;
string c1,s1,c2,s2;
int xiang,pai,ce,lin;
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
for(int i=1;i<=2;i++){
cin>>c1[i];
}
for(int i=1;i<=3;i++){
	cin>>s1[i];
}
for(int i=1;i<=2;i++){
	cin>>c2[i];
}for(int i=1;i<=3;i++){
	cin>>s2[i];
}
if(c1==c2){
	xiang=1;
}
else{
	cout<<"0000";
	return 0;
}
int cnt1=s1[1]*10+s1[2];
int cnt2=s2[1]*10+s2[2];
if(cnt1==cnt2){
	pai=1;
}
else{
	cout<<"1000";
	return 0;
}

if(s1[3]=='A'||s1[3]=='B'||s1[3]=='C'){
	if(s2[3]=='A'||s2[3]=='B'||s2[3]=='C'){
		ce=1;
	}
	else{
		cout<<"1100";
		return 0;
	}
}
else{
	if(s1[3]=='D'||s1[3]=='F'){
		cout<<"1111";
		return 0;
	}
	else{
		cout<<"1100";
		return 0;
	}
}
if(s1[3]=='A'&&s2[3]=='C'){
	cout<<"1110";
	return 0;
}
else{
	cout<<"1111";
}

return 0;}
