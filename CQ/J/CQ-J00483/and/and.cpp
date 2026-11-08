#include<bits/stdc++.h>
using namespace std;
bool bi[200005][30];
vector<int> si[31];
int arr[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,e,ans=0,cnt=0;
	bool flag=true;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)scanf("%d",&arr[i]);
	for(int i=0;i<n;i++){
		e=arr[i];
		for(int j=0;e;j++){
			if((e&1)==1)bi[i][j]=true;
			e>>=1;
		}
	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<30;j++){
//			bi[i][j]?printf("1 "):printf("0 ");
//		}
//		printf("\n");
//	}
	for(int i=0;i<n;i++)si[30].push_back(i);
	for(int i=29;i>-1;i--){
		cnt=0;
		for(auto x:si[i+1])if(bi[x][i]==true){
			si[i].push_back(x);
			cnt++;
		}
		if(cnt>=m){
			ans+=(1<<i);
			flag=false;
		}
		else if(flag){
			si[i].clear();
			for(int j=0;j<n;j++)si[i].push_back(j);
		} 
//		printf("%d\n",cnt);
	}
//	for(int i=3;i>-1;i--){
//		for(auto x:si[i])printf("%d ",x);
//		printf("\n");
//	}
	printf("%d",ans);
	return 0;
}
