#include<bits/stdc++.h>
//#define ull unsigned long long
using namespace std;

int n,m;
vector<int>a;
vector<int>t;
bool b[300002];
unsigned int cnt[300002];
int main()
{
	a.push_back(0);
	t.push_back(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		int x;
		scanf("%d",&x);
		a.push_back(x);
	}
	
	for(int i=1;i<=n;i++)// games ci shu
	{
		for(int j=i;j<=n;j++)//putting No.j card
		{
			int k=a[j];//k means the number on the card
			if(b[k])//k was used
			{
				for(int p=j;p<=t.size();p++)
				{
					b[t[p]]=0;
				}
				t.resize(j);	
			}
			t.push_back(k);
			b[k]=1;
		}
		for(int q=1;q<=m;q++)
		{
			if(b[q])cnt[q]++;
		}
		
		
		t.clear();
		t.push_back(0);
		memset(b,0,sizeof(b));
		
		
		
	}
	for(int q=1;q<=m;q++)
	{
		printf("%d ",cnt[q]);
	}
	return 0;
}
