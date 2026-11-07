#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool f1,f2,f3,f4;
	f1=f2=f3=f4=false;
	if(c1==c2)f1=true;
	int p1=int(s1[0]-'0')*10+int(s1[1]-'0'),p2=int(s2[0]-'0')+int(s2[1]-'0');
	if(f1&&p1==p2)f2=true;
	int q1=int(s1[2]-'A'),q2=int(s2[2]-'A');
	if(f2&&(q1<=2&&q2<=2||q1>2&&q2>2))f3=true;
	if(f3&&abs(q1-q2)==1)f4=true;
	cout<<f1<<f2<<f3<<f4;
	return 0;
}