#include<bits/stdc++.h>
using namespace std;
int arr[500005];
int nxt[500005];
int ans[300005];
set<int> carry;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	memset(nxt,0x3f,sizeof(nxt));
	for(int i=0;i<n;i++)scanf("%d",&arr[i]);
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]==arr[i]){
				nxt[i]=j;
				break;
			}
		}
	}
//	for(int i=0;i<n;i++)printf("%d ",nxt[i]);
//	printf("\n"); 
	for(int i=0;i<n;i++){
		carry.clear();
		for(int j=i;j<n;j=j){
//			printf("%d ",j);
			carry.insert(arr[j]);
			if(nxt[j]!=0x3f3f3f3f)j=nxt[j];
			else j++;
		}
		for(auto x:carry){
//			printf("%d ",x);
			ans[x]++;
		}
//		printf("\n");
	}
	for(int i=1;i<=m;i++)printf("%d ",ans[i]);
	return 0;
}
