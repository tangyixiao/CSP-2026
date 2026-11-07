#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define up(i,a,b) for(int i=(a);i<=(int)(b);i++)
#define VI vector<int>
using namespace std;
string c1,c2,s1,s2;
int a1,a2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	a1=s1[2]-'A',a2=s2[2]-'A',s1[2]=' ',s2[2]=' ';
	if(c1!=c2) return cout<<"0000",0;
	cout<<"1";
	if(s1!=s2) return cout<<"000",0;
	cout<<"1";
	if(max(a1,a2)>=3&&min(a1,a2)<3) return cout<<"00",0;
	cout<<"1";
	if(abs(a1-a2)!=1&&(a1!=5||a2!=3)&&(a2!=5||a1!=3)) return cout<<"0",0;
	cout<<"1"; 
	return 0;
}
