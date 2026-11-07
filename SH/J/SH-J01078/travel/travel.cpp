#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool t1,t2,t3,t4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2)t1=1;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&t1==1)t2=1;
	if(((s1[2]>='D'&&s2[2]>='D')||(s1[2]<='C'&&s2[2]<='C'))&&t2==1)t3=1;
	bool t5=(s1[2]<='C'&&s2[2]<='C')&&abs(int(s1[2]-s2[2]))==1;
	bool t6=(s1[2]>='D'&&s2[2]>='D');
	if(t3==1&&(t5||t6))t4=1;
	cout << t1 << t2 << t3 << t4;
	return 0;
}
