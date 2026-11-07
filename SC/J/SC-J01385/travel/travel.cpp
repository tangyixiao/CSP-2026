#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1=c2)cout<<1;
	else cout<<0;
	char a1=s1[0];
	char a2=s1[1];
	char b1=s2[0];
	char b2=s2[1];
	if(a1==b1&&a2==b2)cout<<1;
	else cout<<0;
	char c1=s1[2];
	char c2=s2[2];
}