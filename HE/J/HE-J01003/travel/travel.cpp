#include<bits/stdc++.h>
using namespace std;
int c1,s1,s12,c2,s2,s22;
char c;
bool a[4];
int main()
{
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c;
	s12=c-'A'+1;
	cin>>c2>>s2>>c;
	s22=c-'A'+1;
	if(c1=c2) a[0]=1;
	if(a[0]==1&&s1==s2) a[1]=1;
	if(a[1]==1&&(s12<=3&&s22<=3)||(s12>=4&&s22>=4)) a[2]=1;
	if(a[2]==1&&(s12==s22-1||s12==s22+1)) a[3]=1;
	cout<<a[0]<<a[1]<<a[2]<<a[3];
	return 0;
 } 
