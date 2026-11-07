#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3)
	{
		printf("0000\n");
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	printf("1");
	if(!(s2[0]==s4[0]&&s2[1]==s4[1]))
	{
		printf("000\n");
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	printf("1");
	if(!((s2[2]=='A'||s2[2]=='B'||s2[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||((s2[2]=='D'||s2[2]=='F')&&(s2[2]=='D'||s2[2]=='F')))
	{
		printf("00\n");
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	printf("1");
	if(!(abs(s2[2]-s4[2])==1))
	{
		printf("0\n");
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	printf("1\n");
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
