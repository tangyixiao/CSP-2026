#include<bits/stdc++.h>
using namespace std;
const int N=5*1e5+1000;
const int M=3*1e5+1000;
int n,m;
int num[N];
int tot[M];
bool used[M];
stack<int> s;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>num[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(used[num[j]]==1){
				while(s.top()!=num[j]){
					used[s.top()]=0;
					s.pop();
				}
				used[s.top()]=0;
				s.pop();
			}
			s.push(num[j]);
			used[num[j]]=1;
		}
		memset(used,0,sizeof(used));
		while(!s.empty()){
			tot[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<tot[i]<<" ";
	}
	
	return 0;
}