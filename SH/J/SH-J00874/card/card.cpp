#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

int a[500010] , box[500010] , ans[300010] , st[500010] , tp;
bool flag[300010];

int main()
{
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n , m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		memset(box , 0 , sizeof(box));
		memset(flag , false , sizeof(flag));
		tp = 0;
		//printf("[%d]:\n" , i);
		for (int j = i; j <= n; j++)
		{
			if (st[box[a[j]]] != a[j] || box[a[j]] > tp)
			{
				st[++tp] = a[j];
				box[a[j]] = tp;
			}
			else
			{
				tp = box[a[j]];
			}
			/*
			for (int k = 1; k <= tp; k++)
			{
				printf("%d " , st[k]);
			}
			puts("");
			*/
		}
		//printf("final:");
		for (int j = 1; j <= tp; j++)
		{
			//printf("%d " , st[j]);
			if (!flag[st[j]]) ans[st[j]]++;
			flag[st[j]] = true;
		}
		//puts("");
	}
	for (int i = 1; i <= m; i++)
	{
		cout << ans[i] << ' ';
	}
	cout << '\n';
	return 0;
}


/*
#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

struct Dat
{
	int pos , dfn;
};

vector<int> g[500010];
vector<Dat> box[500010];

int a[500010] , fa[500010] , sz[500010] , ans[500010] , szbox[500010];

void getans(int x)
{
	sz[x] = 1;
	for (int y : g[x])
	{
		getans(y);
		sz[x] += sz[y];
	}
	ans[a[x]] += sz[x];
}

int main()
{
	freopen("card2.in" , "r" , stdin);
	//freopen("card.out" , "w" , stdout);
	int n , m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= m; i++)
	{
		box[a[i]].push_back({0 , -1});
	}
	int ttt = 0 , p = n + 1 , cur = 0;
	for (int i = n; i >= 1; i--)
	{
		//printf("[%d]:p=%d,dfn=%d,box[%d]={%d,%d}," , i , p , ttt , a[i] , box[a[i]].pos , box[a[i]].dfn);
		printf("[%d]:p=%d,dfn=%d,szbox[%d]=%d," , i , p , ttt , a[i] , szbox[a[i]]);
		while (szbox[a[i]])
		{
			if (box[a[i]][szbox[a[i]]].pos < p && box[a[i]][szbox[a[i]]].dfn != ttt) szbox[a[i]]--;
			else break;
		}
		if (!szbox[a[i]])
		{
			g[cur].push_back(i);
			fa[i] = cur;
			cur = i;
			szbox[a[i]]++;
			if (box[a[i]].size() == szbox[a[i]]) box[a[i]].push_back({i , ttt});
			else box[a[i]][szbox[a[i]]] = {i , ttt};
			printf("forward");
		}
		else
		{
			cur = box[a[i]][szbox[a[i]]].pos;
			fa[i] = fa[cur];
			g[fa[i]].push_back(i);
			ttt++;
			p = cur;
			cur = i;
			printf("back");
		}
		printf(",fa[%d]=%d,box[%d]={%d,%d}\n" , i , fa[i] , a[i] , box[a[i]][szbox[a[i]]].pos , box[a[i]][szbox[a[i]]].dfn);
	}
	getans(0);
	for (int i = 1; i <= m; i++)
	{
		cout << ans[i] << ' ';
	}
	cout << '\n';
	return 0;
}
*/
