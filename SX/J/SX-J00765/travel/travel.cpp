#include<bits/stdc++.h>
using namespace std;
string s1,s2,a1,a2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>s1>>a2>>s2;
	int a,b;
	a=(a1[0]-'0')*10+a1[1]-'0';
	b=(a2[0]-'0')*10+a2[1]-'0';
	bool flag1,flag2,flag3,flag4;
	flag1=(a==b);
	a=(s1[0]-'0')*10+s1[1]-'0';
	b=(s2[0]-'0')*10+s2[1]-'0';
	flag2=flag1&(a==b);
	a=s1[2]-'A'+1;
	b=s2[2]-'A'+1;
	flag3=flag2&((a<=3&&b<=3)||(a>3&&b>3));
	flag4=flag3&((a==4&&b==6)||(a==6&&b==4)?1:abs(a-b)==1);
	cout<<flag1+0<<flag2+0<<flag3+0<<flag4+0<<'\n';
	return 0;
}