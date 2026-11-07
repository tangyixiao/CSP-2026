#include<bits/stdc++.h>
using namespace std;
int read(){
	int x=0,f=1;
	char c=getchar();
	while(c<'0'||c>'9'){
		if(c=='-') f=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		x=x*10+(c-'0');
		c=getchar();
	}
	return x*f;
}

int n;
int a[200000+10];
char c[200000+10];
int head,tail; 
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	n=read();
	for(int i=1; i<=n; i++) scanf("%d %c",&a[i],&c[i]);
	
	head=1; tail=n;
	long long ans=0;
	while(head<=tail)
	{
		if(c[head]==c[tail])
		{
			//printf("0 ");
			if(a[head]==a[tail]){head++;tail--; }
			else if(a[head]>a[tail]) a[head]-=a[tail--];
			else if(a[head]<a[tail]) a[tail]-=a[head++];
		}else
		{
			//printf("1 ");
			if(a[head]==a[tail]){
				//printf("11 ");
				ans+=a[head];
				head++; tail--; 
			}else if(a[head]>a[tail]){
				//printf("12 ");
				a[head]-=a[tail];
				ans+=a[tail];
				tail--;
			}else if(a[head]<a[tail]){
				//printf("13 ");
				a[tail]-=a[head];
				ans+=a[head];
				head++;
			}
		}
		//printf("%d %d %d\n",head,tail,ans);
	}
	
	printf("%lld",ans);
	
    return 0;
}
