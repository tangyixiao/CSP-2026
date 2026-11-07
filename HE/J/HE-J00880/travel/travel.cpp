#include<bits/stdc++.h>
using namespace std;
long long c1,s11,s12,c2,s21,s22;
char c; 
bool a[4];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s11>>c;
	s12=c-'A'+1;
	cin>>c2>>s21>>c;
	s22=c-'A'+1;
	if(c1==c2) a[0]=1;
	if(a[0]==1&&s11==s21) a[1]=1;
	if(a[1]==1&&((s12<=3&&s22<=3)||(s12>=4&&s22>=4))) a[2]=1;
	if(a[2]==1&&abs(s12-s22)==1) a[3]=1;
	cout<<a[0]<<a[1]<<a[2]<<a[3];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
