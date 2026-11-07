#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,key[3]={},InL=0,InR=0,ina=0,inb=0,inc=0,ind=0,inf=0,key3=0;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		key[0]=1;
	}
	if(key[0]==1&&s1[0]==s2[0]&&s1[1]==s2[1])
	{
		key[1]=1;
	}
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C') InL++;
	if(s1[2]=='D'||s1[2]=='F') InR++;
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C') InL++;
	if(s2[2]=='D'||s2[2]=='F') InR++;
	if(key[1]==1&&(InL==2||InR==2))
	{
		key[2]=1;
	}
	if(s1[2]=='A') ina++;
	if(s1[2]=='B') inb++;
	if(s1[2]=='C') inc++;
	if(s1[2]=='D') ind++;
	if(s1[2]=='F') inf++;
	if(s2[2]=='A') ina++;
	if(s2[2]=='B') inb++;
	if(s2[2]=='C') inc++;
	if(s2[2]=='D') ind++;
	if(s2[2]=='F') inf++;
	if(ina==1&&inb==1) key3=1;
	if(inc==1&&inb==1) key3=1;
	if(ind==1&&inf==1) key3=1;
    if(key3==1&&key[2]==1)
    {
    	key[3]=1;
	}
	cout<<key[0]<<key[1]<<key[2]<<key[3];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
