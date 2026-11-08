#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[300010],have[300010];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++) {
		scanf("%d",&a[i]);
	}
	for(int i=1; i<=n; i++) {
		string s="";
		for(int j=i; j<=n; j++) {
			char c=a[j];
			int f=s.find(c);
			if(f!=-1) {
				s.erase(f,j-f-1);
			}
			s+=c;
		}
		for(int j=1; j<=m; j++) {
			char c=j;
			if(s.find(c)!=-1)have[j]++;
		}
	}
	for(int i=1; i<=m; i++) {
		printf("%d ",have[i]);
	}
	return 0;
}
