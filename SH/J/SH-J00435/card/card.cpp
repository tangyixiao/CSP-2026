#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[500005];

bool has[300005];
int cnt[300005];
stack<int> s;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=300005;i++)cnt[i]=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			s.push(a[j]);
			if(has[a[j]]){
				s.pop();
				while(s.top()!=a[j]){
					s.pop();
				}
			}
			has[a[j]]=true;
		}
		while(!s.empty()){
			cnt[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[m]<<' ';
	}
	return 0;
}
