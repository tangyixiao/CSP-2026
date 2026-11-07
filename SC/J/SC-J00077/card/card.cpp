#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int n,m;
int ans[500005];
int a[500005];
int cnt[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int l=1;l<=m;l++){
			cnt[l]=0;
		}
		for(int j=i;j<=n;j++){
			s.push(a[j]);
			cnt[a[j]]++;
			if(cnt[a[j]]==2){
				cnt[a[j]]--;
				s.pop();
				for(;;){
					if(s.top()!=a[j]){
						cnt[s.top()]--;
						s.pop();
					}
					else if(s.top()==a[j]){
						cnt[s.top()]--;
						s.pop();
						break;
					}	
				}
			}

		}
		while(!s.empty()){
			ans[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
}