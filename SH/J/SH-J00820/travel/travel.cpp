#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int p[15];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	p['A']=p['B']=p['C']=1;
	p['D']=p['E']=2;
	cin>>s1;
	cin>>s2;
	cin>>s3;
	cin>>s4;
	if(s1!=s3)
		printf("0000\n");
	else if(s2[0]!=s4[0]||s2[1]!=s4[1])
		printf("1000\n");
	else if(p[s2[2]]!=p[s4[2]])
		printf("1100\n");
	else if(min(s2[2],s4[2])+1!=max(s2[2],s4[2]))
		printf("1110\n");
	else
		printf("1111\n");
	fclose(stdin);
	fclose(stdout);
	return 0;	
}
