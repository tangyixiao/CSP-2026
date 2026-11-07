#include<cstdio>
#include<algorithm>
struct node{
	int n;
	char c;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;long long ans=0;
	scanf("%d",&n);
	node in[n];
	for(int i=0;i<n;i++){
		scanf("%d %c",&in[i].n,&in[i].c);
		//printf("%d %c\n",in[i].n,in[i].c);
	}
	int first=0,last=n-1;
	while(first<last){
		node a=in[first],b=in[last];
		if(a.c!=b.c){
			ans+=std::min(a.n,b.n);
		}
		if(a.n<b.n){
			first++;
			in[last].n-=a.n;
		}else if(a.n==b.n){
			first++;
			last--;
		}else{
			last--;
			in[first].n-=b.n;
		}
	}
	printf("%lld",ans);
}