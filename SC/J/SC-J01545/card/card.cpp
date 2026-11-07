#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,m,pai[N],ans[M];
vector<int>table;
bool have[N];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>pai[i];
	}
	for(int i=1;i<=n;i++)
	{
		table.clear();
//		cout<<"Round "<<i<<":\n";
		for(int j=i;j<=n;j++)
		{
			if(have[pai[j]]==true){
//				table.clear();
				while(table.back()!=pai[j]){
					have[table.back()]=false;
					table.pop_back();
				}
			}
			else{
				table.push_back(pai[j]);
				have[pai[j]]=true;
			}
			
//			cout<<"  ";
//			for(int k=0;k<(int)table.size();k++){
//				cout<<table[k]<<" ";
//			}
//			cout<<"\n";
		}
//		cout<<"This end:";
		for(int j=1;j<=m;j++){
			if(have[j]==true) ans[j]++;
			have[j]=false;
		}
	}
	/*
	4 3
	1 2 1 3
	
	10 3
	3 1 2 1 3 2 3 1 2 1
	*/
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}