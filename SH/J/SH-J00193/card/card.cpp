#include<cstdio>
#include<cstdlib>
#include<cstring>
int n,m,a[200005];
bool A=1;
void forty_eight_points(){
	int l=0,a_[5005],exist[5005],ans[5005];
	memset(ans,0,sizeof(ans));
	for(int i=0;i<n;++i){
		memset(a_,0,sizeof(a_));
		memset(exist,-1,sizeof(exist));
		l=0;
		for(int j=i;j<n;++j){
			if(exist[a[j]]!=-1){
				for(int k=l-1;k>exist[a[j]];--k,--l)
					exist[a_[k]]=-1;
			}else{
				a_[l]=a[j];
				exist[a[j]]=l;
				++l;
			}
		}
		for(int j=0;j<l;++j)
			++ans[a_[j]];
	}
	for(int i=0;i<m;++i)
		printf("%d ",ans[i]);
}
void four_points(){
	int exist[100005];
	memset(exist,0,sizeof(exist));
	for(int i=0;i<n;++i)
		++exist[a[i]];
	printf("%d",exist[0]);
	for(int i=1;i<m;++i){
		exist[i]=exist[i]+exist[i-1];
		printf(" %d",exist[i]);
	}
}
void oh_that_is_so_hard(){
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d%d",&n,&m,&a[0]);
	--a[0];
	for(int i=1;i<n;++i){
		scanf("%d",&a[i]);
		--a[i];
		if(a[i]<a[i-1])
			A=0;
	}
	if(A){
		four_points();
	}else if(n<=5000)
		forty_eight_points();
	else{
		oh_that_is_so_hard();
	}
	return 0;
} 
