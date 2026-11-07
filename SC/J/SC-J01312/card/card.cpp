#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> a;
int cs[1000001];
int aa[1000001];
bool sp(int x,vector<int> q){
	for(int i=0;i<q.size();i++){
		if(q[i]==x){
			return 0;
		}
	}
	return 1;
}
int wz(int x,vector<int> q)
{
	for(int i=0;i<q.size();i++){
		if(q[i]==x){
			return i;
		}
	}
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>aa[i]; 
	}
	for(int i=0;i<n;i++)
	{
		a.clear();
		for(int j=i;j<n;j++)
		{
			if(sp(aa[j],a)){
				a.push_back(aa[j]);
			}
			else
			{
				int xb=wz(aa[j],a);
				a.erase(a.begin()+xb,a.begin()+j);
				a.push_back(aa[j]);
			}
		}
		for(int x=0;x<a.size();x++){
			int sz=a[x];
			cs[sz]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<cs[i]<<" ";
	}
	return 0;
}