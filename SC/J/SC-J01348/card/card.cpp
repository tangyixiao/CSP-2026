#include<bits/stdc++.h>
using namespace std;
void ans(int x,const vector<int> &a,vector<int> &sum)
{
	unordered_set<int> st;
	deque<int> q;
	for(int j=x;j<a.size();j++)
	{
		int i=a[j];
		if(st.find(i)!=st.end())
		{
			while(st.find(i)!=st.end()){
				st.erase(q.back());
				q.pop_back();
			}
			q.push_back(i);
			st.insert(i);
		}
		else
		{
			q.push_back(i);
			st.insert(i);
		}
	}
	while(!q.empty()){
		sum[q.back()]++;
		q.pop_back();
	}
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,m,maxx=INT_MIN;
	cin>>n>>m;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	vector<int> sum(maxx+1);
	for(int i=1;i<=n;i++){
		ans(i,a,sum);
	}
	for(int i=1;i<=maxx;i++){
		cout<<sum[i]<<' ';
	}
	return 0;
}