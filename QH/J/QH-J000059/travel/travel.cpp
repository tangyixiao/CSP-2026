#include<iostream>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int R1,O1,R2,O2;
	cin>>R1>>O1>>R2>>O2;
	for(int i=0;i<=4;i++)
	{
		if(R1=R2)
		{
			cout<<1;
		}
		else{
			cout<<0;
		}
		if(O1=O2)
		{
			cout<<1;
			
		}
		else{
			cout<<0;
		}
		if(R2=R1){
			cout<<1;
		} 
		else{
			cout<<0;
		}
		if(O2=O1){
			cout<<1;
		}
		else{
			cout<<0;
		}
	
	return 0;
}

