#include <cstdio>
#include <cstring>
using namespace std;
int ans[300030];
int find[300030];
struct object{
	int num;
	int next;
}a[500050];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	memset(find,-1,sizeof(find));
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i].num);
	}
	a[n].next=-1;
	find[a[n].num]=n;
	for(int i=n-1;i>=1;i--){
		if(find[a[i].num]==-1){
			find[a[i].num]=i;
			a[i].next=-1;
		}else{
			a[i].next=find[a[i].num];
			find[a[i].num]=i;
		}
	}
	for(int k=1;k<=n;k++){
		int p=k;
		while(p<=n){
			if(a[p].next==-1){
				ans[a[p].num]++;
				p++;
			}else{
				p=a[p].next;
			}
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	
	return 0;
}