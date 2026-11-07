#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
  	freopen("card.out","w",stdout);
  	int n,m,a[500001],b[300001];
  	for(int i=1;i<=n;i++){
  		cin>>a[i];
	}for(int i=1;i<=n;i++){
		int sum[n];
		for(int j=i;j<=n;j++){
			int num=a[i+j];
			for(int p=1;p<=n;p++)if(sum[p]==num){
				for(int q=1;q<=m;q++)sum[q]=0;
				break;
			}
			sum[i+j]=num;
		}for(int j=1;j<=m;j++){
			b[sum[j]]+=1;
		}
	}for(int i=1;i<=m;i++)cout<<b[i]<<' ';
	fclose(stdin);
 	fclose(stdout); 
	return 0;
} 
