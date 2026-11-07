#include <bits/stdc++.h>
using namespace std;
int read(){
	int res = 0;
	char ch = getchar();
	while (ch < '0' || ch > '9') ch = getchar();
	while (ch >= '0' && ch <= '9'){
		res = res * 10 + ch - '0';
		ch = getchar();
	}
	return res;
}
struct Edge{
	int next;
	int num;
}edge[1000005];
int tot;
int head[40];
int siz[40];
int mi[40];
int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	mi[0] = 0;
	mi[1] = 1;
	for (int i = 2;i <= 31;i++){
		mi[i] = (mi[i-1] << 1);
	}
	
	n = read();
	m = read();
	for (int i = 1;i <= n;i++){
		int a = read();
		int j = 31;
		while (mi[j] > a) j--;
		edge[++tot].num = a;
		edge[tot].next = head[j];
		head[j] = tot;
		siz[j]++;
	}
	int ans = 0;
	for (int i = 31;i >= 0;i--){
//		printf("i:%d\n",i);
		if (siz[i] == 0) continue;
		else if (siz[i] < m){
			for (int k = head[i];k;k = edge[k].next){
				int a = edge[k].num;
				a -= mi[i];
				int j = i+1;
				while (mi[j] > a) {
					j--;
				}
				edge[++tot].num = a;
				edge[tot].next = head[j];
				head[j] = tot;
				siz[j]++;
			}
			head[i] = 0;
			siz[i] = 0;
		}
		else {
//			printf("i:%d\n",i);
//			printf("siz:%d\n",siz[i]);
			for (int j = 0;j < i;j++){
				head[j] = 0;
				siz[j] = 0;
			}
			for (int k = head[i];k;k = edge[k].next){
				int a = edge[k].num;
//				printf("a:%d",a);
				a -= mi[i];
//				printf("a:%d",a);
				int j = i+1;
				while (mi[j] > a) {
					j--;
				}
				edge[++tot].num = a;
				edge[tot].next = head[j];
				head[j] = tot;
				siz[j]++;
//				printf(",siz:%d,j:%d\n",siz[j],j);
				
			}
			head[i] = 0;
			siz[i] = 0;
			ans += mi[i];
//			printf("ans:%d\n",ans);
		}
	}
	printf("%d",ans);
	return 0;
}