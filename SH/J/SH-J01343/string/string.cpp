//T2 - string
#include<cstdio>
const int N = 2e5 + 5;
struct node{
	int a;
	char c[2];
};
node str[N];
int n;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%s",&str[i].a,str[i].c);
	}
	int i1=1,i2=n,lef1=str[1].a,lef2=str[n].a;ans=0;
	while(i1<=i2){
		if(lef1>=lef2){
			ans+=(str[i1].c[0]!=str[i2].c[0])*lef2;
			lef1-=lef2;
			lef2-=lef2;
		}
		else{
			ans+=(str[i1].c[0]!=str[i2].c[0])*lef1;
			lef2-=lef1;
			lef1-=lef1;
		}
		if(lef1==0){
			i1++;
			if(i1>n)break;
			lef1=str[i1].a;
		}
		if(lef2==0){
			i2--;
			if(i2<1)break;
			lef2=str[i2].a;
		}
	}
	printf("%lld\n",ans);
	fclose(stdin);fclose(stdout);
	return 0;
}
