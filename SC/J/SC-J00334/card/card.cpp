#include<bits/stdc++.h>
using namespace std;
const int N=500000,M=300000;
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

int n,m;
int a[N+10];
int ans[M+10];
int nex[N+10];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	n=read(); m=read();
	for(int i=1; i<=n; i++) a[i]=read();
	
	for(int i=1; i<=n; i++)
		for(int j=i+1; j<=n; j++)
			if(a[j]==a[i]){nex[i]=j; break;}
		
	//for(int i=1; i<=n; i++) printf("%d ",nex[i]);
	//printf("\n");
	if(m==1){
		ans[1]==n;
	}else if(m==2){
		if(a[n]==1){
			for(int i=1; i<=n; i++) if(a[i]==2) ans[2]++;
			ans[1]=n;
		}else if(a[n]==2){
			for(int i=1; i<=n; i++) if(a[i]==1) ans[1]++;
			ans[2]=n;
		}
	}else{
		for(int i=1; i<=n; i++)
		{
			for(int j=i; j<=n; j++)
			{
				while(nex[j]!=0) j=nex[j];
				
				//printf("%d ",j);
				ans[a[j]]++;
			}
			//printf("\n");
			//for(int j=1; j<=m; j++) printf("%d ",ans[m]);
			//printf("\n");
		}
	}
	
	for(int i=1; i<=m; i++) printf("%d ",ans[i]);	
	
    return 0;
}
