#include<cstdio>
#include<algorithm> 
#include<vector>
int n,m,cyc,a[200005],hzh[200005],qzh[200005];
bool all_one=true;
void dfs(const int& choice,const int& last,const int& lj){
	if(choice==m){
		cyc=std::max(cyc,lj);
		return ;
	} 
	for(int i=last+1;i+m-choice-1<=n;i++){
		dfs(choice+1,i,(lj==-1?a[i]:(lj&a[i])));
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",a+i);
		if((a[i]&(a[i]+1))!=0){
			all_one=false;
		}
	}
	if(m==1){//number 6
		printf("%d",*std::max_element(a+1,a+n+1));
		return 0;
	}
	if(m==2){//number 8,9,10
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=std::max(ans,(a[i]&a[j]));
			}
		}
		printf("%d",ans);
		return 0;
	}
	if(m==n){//number 7
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		printf("%d",ans);
		return 0;
	}
	if(m==n-1){//number 11,12
		for(int i=1;i<=n;i++){
			qzh[i]=(a[i]&(i==1?a[i]:qzh[i-1]));
		}
		for(int i=n;i>=1;i--){
			hzh[i]=(a[i]&(i==n?a[i]:hzh[i+1]));
		}
		int ans=std::max(qzh[n-1],hzh[2]);
//		printf("not %d\nnot 1\n",n);
		for(int i=2;i<n;i++){
//			printf("not %d\n",i);
			ans=std::max(ans,(qzh[i-1]&hzh[i+1]));
		}
		printf("%d",ans);
		return 0;
	}
	if(all_one){//number 13,Special A
		std::sort(a+1,a+n+1);
		int ans=a[n];
		for(int i=n-1;i>=n-m+1;i--){
			ans&=a[i];
		}
		printf("%d",ans);
		return 0;
	}
	dfs(0,0,-1);
	printf("%d",cyc);
}
