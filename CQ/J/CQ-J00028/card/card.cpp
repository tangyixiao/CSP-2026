#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
stack<int>stk;
long long tong[N],mp[N],a[N];
long long n;
long long m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(mp,0,sizeof(mp));
		for(int j=i;j<=n;j++){
			if(mp[a[j]]!=0){
				while(stk.top()!=a[j]){
					mp[stk.top()]=0;
					tong[stk.top()]--;
					stk.pop();
				}
			}
			else{
				stk.push(a[j]);
				mp[a[j]]++;
				tong[a[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<tong[i]<<" ";
	}
	return 0;
}
