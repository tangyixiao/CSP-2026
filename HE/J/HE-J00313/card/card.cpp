#include<bits/stdc++.h>
using namespace std;
int n,m;
int s[500010];
int ans[200010]; 
int h[200010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		h[s[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			j=h[s[j]];
			ans[s[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
} 

























//呃呃呃打个暴力应该能拿70pts左右吧
//就这样吧最后一年了 
//还有30min正解应该不好想了 
