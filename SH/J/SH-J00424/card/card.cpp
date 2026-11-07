#include<bits/stdc++.h>
#include<stack>
using namespace std;
int a[200005]={0};
int ans[300005]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		deque<int> d;
		bool s[200005];
		for(int j=i;j<=n;j++){
			if(s[a[i]]){
				while(d.back()!=a[i]){
					s[d.back()]=false;
					d.pop_back();
				}
			}else{
				s[a[i]]=true;
				d.push_back(a[i]);
			}
		}
		for(int i=0;i<=m;i++){
			if(s[i]==true){
				ans[i]++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
