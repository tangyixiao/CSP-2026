#include<bits/stdc++.h>
#define endl '\n'
#define N 200006
#define M 100006
using namespace std;
int n,m,a[N],ans[M],sum,b[N];
bool v[M];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(m==2){
		for(int i=n;i>=1;i--)
			sum+=a[i]==a[n];
		if(a[n]==1)
			cout<<n<<" "<<n-sum;
		else
			cout<<n-sum<<" "<<n;
		return 0;
	}
	if(m>3000){
		for(int i=1;i<=n;i++)
			if(a[i]!=a[i-1])
				ans[a[i-1]]=i-1;
		ans[m]=n;
		for(int i=1;i<=m;i++)
			cout<<ans[i]<<" ";
		return 0;
	}
	for(int i=1;i<=n;i++){
		stack<int> s;
		memset(v,0,sizeof v);
		for(int j=i;j<=n;j++){
			if(v[a[j]])
				while(s.top()!=a[j]){
					v[s.top()]=0;
					ans[s.top()]--;
					s.pop();
				}
			else{
				s.push(a[j]);
				v[a[j]]=1;
				ans[a[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1

14 2
1 2 1 2 1 1 2 2 1 2 2 1 1 2
18 9
1 2 2 3 3 3 4 4 5 6 7 7 8 8 8  9 9 9
*/