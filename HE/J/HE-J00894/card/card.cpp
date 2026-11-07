#include <bits/stdc++.h>
using namespace std;

const int N=5*1e5+10;
const int M=3*1e5+10;

int n,m;
int arr[N];
bool flag=true;
int res[M];
int co[M];

int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
	{
		cin>>arr[i];
		co[arr[i]]++;
		if(arr[i]<arr[i-1]) flag=false;
	}
	
	if(flag)
	{
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i<arr[j]) continue;
				else if(co[i]%2==1||arr[j+1]>i) 
				{
				   res[i]++;
				}
			}
		}
		for(int i=1;i<=m;i++) cout<<res[i]<<" ";
	}
	
return 0;}
