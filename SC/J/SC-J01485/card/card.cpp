#include<bits/stdc++.h>
using namespace std;

stack<int> s;
const int N=500010,M=300010;
int a[N];
bool hsh[M];
int sum[M];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++) cin>>a[i];
	
	
	for(int i=1;i<=n;i++){
		memset(hsh,0,sizeof(hsh));
		for(int j=i;j<=n;j++){
			if(hsh[a[j]]==0){
				s.push(a[j]);
				hsh[a[j]]=1;
			}else{
				while(s.top()!=a[j]){
					int x=s.top();
					hsh[x]=0;
					s.pop();
				}
				s.pop();
				s.push(a[j]);
				hsh[a[j]]=1;
			}
		}
		while(!s.empty()){
			int x=s.top();
			sum[x]++;
			s.pop();
		}
	}

	for(int i=1;i<=m;i++) cout<<sum[i]<<" ";	
	
	


	return 0;
}
