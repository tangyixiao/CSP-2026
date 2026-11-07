#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
    int a[500001],b[500001],cnt[300001],n,m;
    scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int x=1;x<=m;x++){
		cnt[x]=0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			b[j-i+1]=a[j];
			for(int k=1;k<=j-i;k++){
				if(b[k]==a[j]){
					for(int l=k=1;l<=j-i+1;l++) b[l]=0;
					break;	
				}
			}
		}
		for(int k=1;k<=n-i;k++){
			for(int l=1;l<=m;l++){
				if(b[k]==l) cnt[l]++;
			}
	    }
	    for(int j=1;j<=n-i+1;j++){
		   b[j]=0;
	    }
	}
	for(int i=1;i<=n;i++){
		printf("%d",a[i]);
		cout<<' ';
	}
    return 0; 
}
