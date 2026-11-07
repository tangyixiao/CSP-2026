#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a(string c1,string c2){
	for(int i=0;i<c1.size();i++){
		if(c1[i]!=c2[i]){
			return 0;
		}
	}
	return 1;
}
int b(string s1,string s2){
	for(int i=0;i<s1.size()-1;i++){
		if(s1[i]!=s2[i]){
			return 0;
		}
	}
	return 1;
}
int c(string s1,string s2){
	int g=0;
	for(int i=0;i<s1.size()-1;i++){
		if(s1[i]!=s2[i]){
			g=0;
			break;
		}else{
			g=1;
		}
	}
	if(s1[s1.size()-1]=='A' && s2[s2.size()-1]=='B') g+=1;
	if(s1[s1.size()-1]=='B' && s2[s2.size()-1]=='A') g+=1;
	if(s1[s1.size()-1]=='B' && s2[s2.size()-1]=='C') g+=1;
	if(s1[s1.size()-1]=='C' && s2[s2.size()-1]=='B') g+=1;
	if(s1[s1.size()-1]=='D' && s2[s2.size()-1]=='F') g+=1;
	if(s1[s1.size()-1]=='F' && s2[s2.size()-1]=='D') g+=1;
	if(s1[s1.size()-1]=='A' && s2[s2.size()-1]=='C') g+=1;
	if(s1[s1.size()-1]=='C' && s2[s2.size()-1]=='A') g+=1;
	if(g==0 || g==1) return 0;
	else return 1;
}
int d(string s1,string s2){
	int g=0;
	if(s1[s1.size()-1]=='A' && s2[s2.size()-1]=='B') g+=1;
	if(s1[s1.size()-1]=='B' && s2[s2.size()-1]=='A') g+=1;
	if(s1[s1.size()-1]=='B' && s2[s2.size()-1]=='C') g+=1;
	if(s1[s1.size()-1]=='C' && s2[s2.size()-1]=='B') g+=1;
	if(s1[s1.size()-1]=='D' && s2[s2.size()-1]=='F') g+=1;
	if(s1[s1.size()-1]=='F' && s2[s2.size()-1]=='D') g+=1;
	if(g==0) return 0;
	else return 1;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	cout<<a(c1,c2);
	cout<<b(s1,s2);
	cout<<c(s1,s2);
	cout<<d(s1,s2);
	return 0;
}
