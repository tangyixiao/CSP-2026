#include<bits/stdc++.h>
using namespace std;
int m,n,a[9999999],ans[10];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
	}
	for(int j=1;j<=n;j++) {
		stack<int> q;
		int t[10]={0};
		for(int i=j;i<=n;i++) {
			t[a[i]]++;
			q.push(a[i]);
			if(t[a[i]]>1) {
				while(t[a[i]]!=0) {
					t[q.top()]--;
					q.pop();
				}
//				for(int i=0;i<10;i++) t[i]=0;
				t[a[i]]++;
				q.push(a[i]);
			}
		}
		while(!q.empty()) {
			ans[q.top()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}