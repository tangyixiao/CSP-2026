#include<bits/stdc++.h>
#define MAXN 200010
#define int long long 
using namespace std;
int n, m, a[MAXN], b[MAXN][60], box[60], cur=35;
vector<int> ans;
signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i=1; i<=n; i++)
	{
		int y;
		cin >> a[i];
		y=a[i];
		for(int j=1; y!=0; j++)
		{
			int x=y%2;
			//预处理各数2次幂 
			b[i][j]=x;
			y/=2;
		}
		ans.push_back(i);
	}
	/*for(int i=1; i<=n; i++)
		for(int j=1; j<=10; j++)
			cout << b[i][j] << " \n"[j==10];*/
	while(ans.size()!=m)
	{
		memset(box, 0, sizeof box);
		for(int i=0; i<ans.size(); i++)
			for(int j=1; j<=35; j++)
				box[j]+=b[ans[i]][j];//统计幂次出现个数 
		bool flag=1;
		vector<int> tmp;
		for(int i=cur; i>=1; i--)
		{
			if(box[i]>=m)
			{
				flag=0;
				cur=i-1;
				for(int j=0; j<ans.size(); j++)
				{
					if(b[ans[j]][i])
						tmp.push_back(ans[j]);//记录包含最大次幂的a[i]下标 
				}
				break;
			}
		}
		if(flag)//如果没有更多直接输出 
		{
			int cnt=a[ans[0]];
			for(int i=1; i<ans.size(); i++)
				cnt=cnt&a[ans[i]];
			cout << cnt;
			return 0;
		}
		ans.clear();
		for(int i=0; i<tmp.size(); i++)ans.push_back(tmp[i]);//记录下一轮ans
		//for(int i=0; i<ans.size(); i++)cout << a[ans[i]] << ' ';
	}
	int cnt=a[ans[0]];
	for(int i=1; i<ans.size(); i++)
		cnt=cnt&a[ans[i]];
	cout << cnt;
	return 0;
 }
 //GGS
