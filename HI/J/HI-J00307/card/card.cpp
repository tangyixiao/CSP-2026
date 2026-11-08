#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int b[100005];
int c[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	int x=1;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int k=1;k<=n;k++){
		for(int i=k;i<=n;i++){
			int r=0;
			bool e=true;
			for(int j=1;j<=x;j++){
				if(c[j]==a[i]){
					r=j;
					e=false;
				}	
			}
			if(e){
				c[x]=a[i];
				x++;
			}
			else{
				for(int j=r+1;j<=n;j++){
					c[j]=0;
				}
				x=r+1;
			}
		}
		for(int q=1;q<=x-1;q++){
				b[c[q]]++;
		}
		for(int q=1;q<=x;q++){
			c[q]=0;
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
