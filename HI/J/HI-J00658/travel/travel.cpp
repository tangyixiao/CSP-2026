#include<bits/stdc++.h>
using namespace std;
int f(int a,int b){
	if((a=='A'||a=='B'||a=='C') && (b=='A'||b=='B'||b=='C'))
		return 1;
	if((a=='D'||a=='F') && (b=='D'||b=='F'))
		return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
		cout<<'1';
	else cout<<'0';
	if(s1[0]==s2[0] && s1[1]==s2[1] && c1==c2) 
		cout<<'1';
	else cout<<'0';
	if(s1[0]==s2[0] && s1[1]==s2[1] && c1==c2 && f(s1[2],s2[2])) 
		cout<<'1';
	else cout<<'0';
	if(c1==c2 && s1[0]==s2[0] && s1[1]==s2[1] && f(s1[2],s2[2]) && (s1[2]+1==s2[2] || s2[2]+1==s1[2]))
		cout<<'1';
	else cout<<'0';
	cout<<endl;
	fclose(stdin);fclose(stdout);
	return 0;
}

