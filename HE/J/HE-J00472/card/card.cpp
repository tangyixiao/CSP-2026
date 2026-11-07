#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i = 1;i<=n;i++)
	{
		vector<int> s;
		s.push_back(a[i]);
		for(int j = i+1;j<=n;j++)
		{
			int f=0;
			for(int k = 0;k<s.size();k++)
			{
				if(s[k]==a[j])f=k;
			}
            if(f!=0){
            	for(int k = s.size();k>f;k--)
            	{
            		s.pop_back();
				}
				s.push_back(a[j]);
			}
			else s.push_back(a[j]);
		}
		for(int j = 1;j<=m;j++){
			for(int k = 0;k<s.size();k++)
			{
				if(s[k]==a[j])
				{
					ans[j]++;
				}
			}
		}
	}
	for(int i = 1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
