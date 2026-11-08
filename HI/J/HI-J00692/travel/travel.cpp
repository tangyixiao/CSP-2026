#include<bits/stdc++.h>
using namespace std;
int c1,c2,ans[14],num1,num2;
string s1,s2;
char seat1,seat2;
int main()
{
	
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) ans[1]=1;
	
	num1=(s1[0]-'0')*10+(s1[1]-'0');
	num2=(s2[0]-'0')*10+(s2[1]-'0');
	seat1=s1[2];
	seat2=s2[2];
	
	if(ans[1]==1&&num1==num2) ans[2]=1;
	
	if(seat1>seat2) swap(seat1,seat2);
	
	if( ans[1]==1 && ans[2]==1 && ( (seat1=='A'&&seat2=='B')||(seat1=='A'&&seat2=='C')||(seat1=='B'&&seat2=='C')||(seat1=='D'&&seat2=='F') ))
	{
		ans[3]=1;
	}
	
	if( ans[1]==1 && ans[2]==1 && ans[3]==1 && ( (seat1=='A'&&seat2=='B')||(seat1=='B'&&seat2=='C')||(seat1=='D'&&seat2=='F') ))
	{
		ans[4]=1;
	}
	
	//cout<<c1<<" "<<c2<<" "<<s1<<" "<<s2<<" "<<num1<<" "<<num2<<" "<<seat1<<" "<<seat2;
	cout<<ans[1]<<ans[2]<<ans[3]<<ans[4]<<"\n";
	return 0;
	
	
	fclose(stdin);
	fclose(stdout);
	
	
}
