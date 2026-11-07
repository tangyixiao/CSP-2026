#include<bits/stdc++.h>
using namespace std;
int s[5000000],ans[5000000],flag[5000000];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	for(int i=1;i<=n;i++){
		stack <int> a;
		for(int j=i;j<=n;j++){
			if(flag[s[j]]==0){
				a.push(s[j]);
				flag[s[j]]++;
			}
			else{
				while(a.top()!=s[j]){
					flag[a.top()]--;
					a.pop();
				}
			}
		}
		while(a.size()){
			ans[a.top()]++;
			a.pop();
		}
		memset(flag,0,sizeof(flag));
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
