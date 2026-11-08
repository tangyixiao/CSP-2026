#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int a,b,x=0,ans=0;
	for(int i=0;i<2;i++)
	{
		if(c1[i]==c2[i])
		{
			x++;
		}
	}
	if(x==2)
	{
		ans+=1;
	}
	x=0;
	if(ans==1){
		for(int i=0;i<2;i++)
		{
			if(s1[i]==s2[i])
			{
				x++;
			}
		}
		if(x==2){
			ans=ans*10+1;
		}else{
			ans*=10;
		}
		if(ans==11){
			if(((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')))
			{
				ans=ans*10+1;
			}else if(((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))){
				ans=ans*10+1;
			}else{
				ans*=10;
			}
		}
		else{
			ans*=10;
		}
		if(ans==111){
			if(((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='B'))){
				ans=ans*10+1;
			}else if(((s1[2]=='D'||s2[2]=='F')&&(s1[2]=='F'||s2[2]=='D'))){
				ans=ans*10+1;
			}
			else{
				ans*=10;
			}
		}else {
			ans*=10;
		}
		cout<<ans;
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}
