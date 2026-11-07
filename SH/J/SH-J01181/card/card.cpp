#include<cstdio>//24pt
#include<cstring>
int a[500005], lst[300005], s[300005]={0};
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=1;i<=n;i++){
		memset(lst, 0, sizeof(lst));
		for(int j=i;j<=n;j++){
			if(lst[a[j]]==0){
				lst[a[j]]=j;
				//printf("[%d,%d]", a[j], lst[a[j]]);
			}
			else{
				//printf("%d %d %d", j, a[j], lst[a[j]]);
				for(int k=1;k<=m;k++){
					if(k==a[j]) continue;
					if(lst[k]>=lst[a[j]]){
						//printf("(%d,%d)", k, lst[k]);
						lst[k]=0;
					}
				}
				lst[a[j]]=j;
			}
		}
		//printf("\n%d:", i);
		for(int j=1;j<=m;j++){
			//printf("%d ", lst[j]);
			if(lst[j]!=0){
				s[j]++;	
			}
		}
		//printf("\n");
	}
	for(int i=1;i<=m;i++){
		printf("%d ", s[i]);
	}
	return 0;
}
