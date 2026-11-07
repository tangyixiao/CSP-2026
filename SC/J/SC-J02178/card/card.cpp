#include <bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5;
int m,n,a[MAXN],res[MAXN]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	int cnt=n;
	for(int i=0;i<n;i++) scanf("%d",a+i);
	while(cnt--){
		set<int> as;
		for (int i=n-cnt;i<n;i++){
			if(!as.count(a[i])) {res[a[i]]++;as.insert(a[i]);printf("%d",a[i]);}
		}
	}
	for(int i=0;i<m;i++) printf("%d ",res[i]);
	return 0;
}