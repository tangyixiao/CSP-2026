#include <bits/stdc++.h>
using namespace std;
int a[10000000]={},b[10000000]={},c[10000000]={};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k=0;
	while(k<n){
		for(int i=k;i<n;i++){
			int flag=0;
			for(int j=0;j<n;j++){
				if(a[i]==b[j]){
					for(int g=j;g<n;g++){
						b[g]=0;
					}
					b[j]=a[i];
					flag=1;
					break;
				}
			}
			if(flag==1){
				continue;
			}else{
				b[i]=a[i];
			}
		}
		for(int i=0;i<n;i++){
			if(b[i]!=0){
				c[b[i]]++;
			}
		}
		k++;
		memset(b,0,sizeof(b));
	}
	for(int i=0;i<=m;i++){
		if(c[i]!=0){
			cout<<c[i]<<" ";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
