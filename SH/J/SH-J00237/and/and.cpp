#include<bits/stdc++.h>
using namespace std;
int a[200005],n,m,t;
vector<int> op;
priority_queue<int,vector<int>,less<int> > q;
void dfs(int x)
{
	if(x>n)return ;
	if(t>=m){
		cout<<"一次了"<<endl; 
		int d=op[0];
		cout<<op.size()<<' ';
		for(int i=0;i<=op.size()-1;i++)
		{
			d=d&op[i];
			cout<<op[i]<<' ';
		}
		cout<<endl;
		//cout<<endl<<"到这儿啦！"<<endl;
		q.push(d);
		t--;
	}
	//cout<<"成功返回"<<endl; 
	op.push_back(a[x]);
	t++;
	dfs(x+1);
	op.pop_back();
	dfs(x+1);
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		q.push(a[i]);
	}
	//m=1
	if(m==1)
	{
		cout<<q.top();
		return 0;
	}
	//m=n
	if(m==n)
	{
		int ans=a[1];
		for(int i=1;i<=n;i++)
			ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	dfs(1);
	cout<<q.top();
	return 0;
}
