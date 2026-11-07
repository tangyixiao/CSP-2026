#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c1=0,s1=0;
	char c2[5],s2[5];
	cin>>c1;
	for(int i=0;i<=2;i++) cin>>c2[i];
	cin>>s1;
	for(int i=0;i<=2;i++) cin>>s2[i];
	if(c1=s1) 
	{
	cout<<1;
	}
	else 
	{
	cout<<"0000";	
	return 0;	
	}
    
	if(c2[0]=!s2[0]) 
	{
	cout<<"000";
	return 0;	
	}
	else
	if(c2[1]=!s2[1])
	{
	cout<<"000";
	return 0;	
	}
	else
	{
	cout<<1;
	}
    
    if(c2[2]='A'||c2[2]='B'||c2[2]='C')
    {
    if(s2[2]=A||s2[2]=B||s2[2]=C)
    cout<<1;
    else
    {
    	cout<<"00";
    	return 0;
	}	
	}
    if(c2[2]=D||c2[2]=F)
    {
    if(c2[2]=D||c2[2]=F)
	cout<<1;
	else
    {
    	cout<<"00";
    	return 0;
	}	
	}
    if(c2[2]+1=s2||s2[2]-1=s2) 
    cout<<1;
    else
    cout<<0;
	return 0;
}