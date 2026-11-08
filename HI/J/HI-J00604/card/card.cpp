#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[200005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int b[200005],ans[100005];
	for(int i=1;i<=n;i++){
		int top=i;
		for(int j=i;j<=n;j++){
			b[top++]=a[j];
			for(int k=i;k<top-1;k++){
				if(b[k]==b[top-1]){
					top=k+1;
					break;
				}
			}
		}
		for(int j=i;j<top;j++){
			ans[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	
	
}
