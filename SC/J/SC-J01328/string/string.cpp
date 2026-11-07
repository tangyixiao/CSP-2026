#include<bits/stdc++.h>
using namespace std;

string c1,c2;
int a,count1,count2,count3;
char s1[10],s2[10];
int main(void)
{
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	
	cin>>c1;
	cin>>s1;
	cin>>c2;
	cin>>s2;
	
	if(c1!=c2)
	{
		cout<<"0000"<<endl;
		return 0;
	}
	
	for(int i=0;i<2;i++) 
	{
		if((s1[i]==s2[i]) && (s1[i]==s2[i]))
			count1++; 
	}
	
	switch(s1[2])
	{
		case 'A':	if((s2[2]=='B') ||(s2[2]=='C') )	count3++;
			break;
		case 'B':	if((s2[2]=='A') ||(s2[2]=='C') )	count3++;
			break;
		case 'C':	if((s2[2]=='B') ||(s2[2]=='A') )	count3++;
			break;
		case 'D':	if(s2[2]=='F' )	count3++;
			break;
		case 'F':	if(s2[2]=='D')	count3++;
			break;
	}
	
	if( ( s1[2]=='C' && s2[2] == 'D' ) || ( s1[2] == 'D' && (s2[2] == 'C'  ) )
		count2==-1;
	else
	{
		if(s1[2]-1==s2[2] || s2[2]-1==s1[2])
		{
			count2=1;
			
		}
	} 
	cout<<'1';
	if(count1==2)
		cout<<'1';
	else
		cout<<'0';
	
	
	if(count3 && (count1==2))
		cout<<'1';
	else
		cout<<'0';
	
	
	if((count1==2) && count2)
		cout<<'1';
	else 
		cout<<'0';
	
	
	return 0;
}