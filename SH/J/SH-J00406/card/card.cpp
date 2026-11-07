#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
const int M=3e5+10;
int a[N];
int cnt[M];
int ans[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	deque<int> desk;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	for(int t=1;t<=n;t++){
		for(int i=t;i<=n;i++){
			if(cnt[a[i]]==0){
				desk.push_back(a[i]);
				cnt[a[i]]=1;
			}
			else{
				while(desk.back()!=a[i]){
					cnt[desk.back()]=0;
					desk.pop_back();
				}
			}
		}
		while(!desk.empty()){
			if(cnt[desk.back()]){
				ans[desk.back()]++;
				cnt[desk.back()]=0;
			}
			desk.pop_back();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0; 
}
