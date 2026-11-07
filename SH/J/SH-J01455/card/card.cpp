#include<bits/stdc++.h>
using namespace std;
struct node{
	int num,id;
}cnt[300010];
long long n,m,a[500010],ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int k=1;k<=n;k++){
		for(int i=k;i<=n;i++){
			cnt[a[i]].num++;
			if(cnt[a[i]].num==2){
				for(int j=cnt[a[i]].id+1;j<i;j++){
					cnt[a[j]].num=0;
				}
			}
			cnt[a[i]].id=i;
			cnt[a[i]].num=1;
		}
		for(int i=1;i<=m;i++){
			ans[i]+=cnt[i].num;
		}
		memset(cnt,0,sizeof(cnt));
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
