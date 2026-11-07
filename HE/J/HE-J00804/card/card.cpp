#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int a[N],b[N];
vector<int>ai;
void bi(int v,int x){
	for(int i=v-1;i>=0;i--){
		if(x==ai[i]){
			while(i<=v-1){
				ai.pop_back();
				i++;
			}
			return ;
		}
	}
	return ;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			bi(ai.size(),a[j]);
			ai.push_back(a[j]);
		}
		for(int i=0;i<=ai.size()-1;i++){
			b[ai[i]]++;
		}
		ai.clear(); 
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
