#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	freopen("travel.out","w",stdout);
	freopen("travel.in","r",stdin);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	bool q=(c1==c2),q1=(s1[0]==s2[0]&&s1[1]==s2[1]&&q);
	bool q2=q1&&(s1[2]<='c'&&s2[2]<='c')||(s1[2]>'c'&&s2[2]>'c');
	cout<<q;
	cout<<q1;
	cout<<q2;
	cout<<(q2&&(s1[2]-s2[2]==1&&s1[2]!='D')||(s2[2]-s1[2]==1&&s2[2]!='D'));
	return 0;
} 