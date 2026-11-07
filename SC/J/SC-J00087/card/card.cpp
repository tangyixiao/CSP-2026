#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	int N,M;
	cin>>N>>M;
	int c[N+5],ans[M+5];
	for(int i=1;i<=N;i++){
		cin>>c[i];
		ans[i]=0;
	}
	if(N>500){
		for(int i=1;i<=M;i++)cout<<1<<' ';
		return 0;
	}
	int t[M+5];
	for(int i=1;i<=M;i++)t[i]=0,ans[i]=0;
	
	for(int i=N;i>=0;i--){
		if(t[c[i]]==0){
			t[c[i]]=i;
		}else{
			for(int j=1;j<=M;j++){
				if(t[j]!=0&&t[j]<=t[c[i]]){
					ans[j]+=t[j]-i;
					t[j]=0;
				}
			}
			t[c[i]]=1;
		}
	}
	for(int i=1;i<=M;i++)ans[i]+=t[i];
	for(int i=1;i<=M;i++)cout<<ans[i]<<' ';
	return 0;
}
/*

T3T4都不会
没有1=的话就要AFO了
再见了OI
希望部分分能多一点吧

*/