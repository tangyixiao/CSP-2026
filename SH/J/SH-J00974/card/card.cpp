#include <bits/stdc++.h>
using namespace std;

const int L=5e5+5;
int a[L]={};
map<int,long long> ans;
string cur="";   //cards on the table

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m,tmp;
	cin>>n>>m;
	
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		//cout<<"Debug : a[i] = "<<a[i]<<'\n';
	}
	
	for (int i=1;i<=n;i++)
	{
		cur="";	
		//every round uses 'j'
		
		for (int j=i;j<=n;j++)
		{
			//cout<<"Debug : a[j] = "<<a[j]<<'\n';
			//cout<<"Debug : cur = "<<cur<<'\n';
			
			if (cur.find((char)(a[j]+'0'))!=string::npos)      //if there're cards which have the same rank as a[j]
			{
				//cout<<"Debug : case 'take'\nDebug : The position is "<<cur.find((char)(a[j]+'0'))<<"\n";
				cur=cur.substr(0,cur.find((char)(a[j]+'0')));  //take away all the cards on the right
				
				//every time he takes away these cards,he needs to append the new card in addition
				cur+=(char)(a[j]+'0');
			}
			else
			{
				
				cur+=(char)(a[j]+'0');
				//cout<<"Debug : case 'append'\nDebug : now cur = "<<cur<<"\n";
			}
		}
		
		//when a round is over
		//count each rank and then clear the table 
		
		for (int i=0;i<cur.size();i++)
		{
			ans[cur[i]-'0']++;
			
			//cout<<"Debug : The round is over\n";
		}
		
	}
	
	for (int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
