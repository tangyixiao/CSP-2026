#include <iostream>
#include <stack>
using namespace std;

stack<int> st;
int cards[1000007];
int inside[1000007] = {0};
int ans[1000007] = {0};

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; ++i)
	{
		cin >> cards[i];
	}
	for(int i = 0; i < n; ++i)
	{
		int num = cards[j];
		cout << i << " " << j << "\t";
		if(inside[num])
		{
		    while(st.top() != num)
		    {
			    inside[st.top()]--;
			    st.pop();
		    }
		}
	        else
		    {
			    st.push(num);
			    inside[num]++;
		    }
		for(int j = 1; j <= m; j++)
		{
			if(inside[j])
			{
				ans[j]++;
			}
		}
        
	}
	for(int i = 1; i <= m; i++)
	{
		cout << ans[i] << ' ';
	}
	return 0;
}
