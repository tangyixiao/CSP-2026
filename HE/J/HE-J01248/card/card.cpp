#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[500005],c[300005],d=-10;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[j]=a[j];	
	}
	for(int j=1;j<=i-1;j++){
			b[j]=0;	
	}for(int w=i;w<=n;w++){
		for(int j=w+1;j<=n;j++){
			if(b[w]==b[j]){
				for(int s=w;s<j;s++){
					b[s]=0;
				}
				
			}
	}
}
			for(int j=1;j<=m;j++){
				for(int z=1;z<=n;z++){
					if(b[z]==j){
						
						c[j]++;
						d=j;
					}
				}
			}
		}

	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	} 
	fclose(stdin);
	fclose(stdout);
	return 0;
}
