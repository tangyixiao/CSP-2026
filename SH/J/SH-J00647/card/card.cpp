#include<bits/stdc++.h>
#define lnt long long
#define endl '\n'
using namespace std;
const int N=5e3+10;
int a[N];
int ton[N];
int ans[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("card.in","r",stdin); 
	freopen("card.out","w",stdout); 
	int n,m;cin>>n>>m;
	if(n>5000){
		int aaa=1;
		int aa;cin>>aa;
		for(int i=2;i<=n;i++){
			int aa;cin>>aa;
			if(aa!=aaa){
				cout<<i-1<<' ';
				aaa=aa;
			}
		}
		cout<<n;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	deque<int> dq;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(ton[a[j]]==1){
				
				while(1){
					if(dq.back()==a[j]){
						break;
					}
					ton[dq.back()]--;
					dq.pop_back();
				}
			}
			else{
				dq.push_back(a[j]);
				ton[a[j]]++;
			}
		}
		for(int j=1;j<=m;j++){
			ans[j]+=ton[j];
			ton[j]=0;
			if(!dq.empty()){
				dq.pop_back();
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
} 
