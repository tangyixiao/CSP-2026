#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000000],b[100000],c[1000000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		b[i]=a[i];
	}
	int c1=n;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=c1;j++){
			for(int k=i+1;k<=c1;k++)
			if(b[j]==b[k]){//打出a[j],查询有无一致 
				for(int k=j;k<=c1;k++)b[k]=0;
				b[c1]=b[j];
				b[j]=0;
			}
			else {
				c1=c1+1;
				b[c1+1]=b[i];
				b[i]=0;
			}
		}
//		for(int i=1;i<=c1;i++){
//			cout<<b[i];
//		}cout<<endl;
		for(int i=1;i<=c1;i++){
			c[b[i]]++;			
		}
		c1=n;
		for(int j=1;j<=n;j++){
			b[j]=a[j];
		}
	}	
	for(int i=1;i<=m;i++){
		cout<<1<<" ";
	}
	fclose(stdin);
	fclose(stdout);
}
