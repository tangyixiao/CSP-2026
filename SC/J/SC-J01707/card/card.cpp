#include<bits/stdc++.h>
using namespace std;
int a[500005],b[500005],cnt[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int w;
			for(int p=i;p<=j;p++){
				if(a[j]==b[p]) {
					for(int q=p;q<=j;q++){
					b[q]=0;
				   }b[p]=a[j];
				}
				else b[j]=a[j];
			}
			
				
				
		}
		for(int h=1;h<=m;h++){
			int t=1;
			for(int j=1;j<=n;j++){
				if(b[j]==h){
					cnt[h]++;
		         	break;
				} 
			}
			
		}
	}for(int h=1;h<=m;h++){
		if(cnt[h]>0) cout<<cnt[h]<<" ";
	}
	return 0;
}