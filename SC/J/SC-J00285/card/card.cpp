#include<iostream>
#include<string>
using namespace std;
//int ds[300030];
int card[500050];
int dscnt[300030];
int main()
{
	freopen("card.in","r",stdin);
		freopen("card.out","w",stdout); 
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>card[i];
	}
	for(int i=0;i<n;i++)
	{
		int cardp[500050];
		int cp=0;
		for(int i1=i;i1<n;i1++)//game cord
		{
			for(int i2=0;i2<cp;i2++)
			{
				if(cardp[i2]==card[i1])
				{
					cp=i2;
				}
			}
			cardp[cp]=card[i1];
			cp++;
		}
//////////////////////////////////////////////////////	/	
//		for(int j=0;j<cp;j++)
//		{
//			cout<<cardp[j];
//		}
//		cout<<"  ";
///////////////////////////////////////////////////////////		
		for(int i1=0;i1<cp;i1++)
		{
			dscnt[cardp[i1]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<dscnt[i]<<" ";
	}
	return 0;
}