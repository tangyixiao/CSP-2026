#include<iostream>
#include<string>
using namespace std;
string c1,s1,c2,s2;
bool ans[3];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	char seat1=s1[2],seat2=s2[2];
	if(c1==c2)
	{
		ans[0]=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			ans[1]=1;
			if(seat1=='A'||seat1=='B'||seat1=='C'){
				if(seat2=='A'||seat2=='B'||seat2=='C'){
					ans[2]=1;
					if(seat1-seat2==1||seat2-seat1==1) ans[3]=1;
				}
			}
			if(seat1=='D'||seat1=='F'){
				if(seat2=='D'||seat2=='F'){
					ans[2]=1;
					if(seat1-seat2==1||seat2-seat1==1) ans[3]=1;
				}
			}
			
			
		}
	}
	
	cout<<ans[0]<<ans[1]<<ans[2]<<ans[3];
	return 0;
}
