#include<bits/stdc++.h>
using namespace std;
#define ll long long
string c1,s1,c2,s2;
bool f1,f2,f3,f4;
bool check1(char a,char b){ //同一侧
	if((a=='A'||a=='B'||a=='C')&&(b=='A'||b=='B'||b=='C'))return 1;
	else if((a=='D'||a=='F')&&(b=='D'||b=='F'))return 1;
	return 0;
}
bool check2(char a,char b){ //相邻
	if((ll)a>(ll)b)swap(a,b);
	if(b=='F')b--;
	if((ll)b-(ll)a<=1)return 1;
	return 0;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	f1=f2=f3=f4=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)f1=1;
	if(f1&&s1[0]==s2[0]&&s1[1]==s2[1])f2=1;
	if(f1&&f2&&check1(s1[2],s2[2]))f3=1;
	if(f1&&f2&&f3&&check2(s1[2],s2[2]))f4=1;
	cout<<f1<<f2<<f3<<f4;
	return 0;
}