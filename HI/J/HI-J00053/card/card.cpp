#include<bits/stdc++.h>
using namespace std;
int n,m,a[5418888];
int mm[5418888],cnt[5418888];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n+1;i++){ 
		for(int j=1;j<=n+4;j++){
			mm[j]={0};
		}
		for(int j=i;j<=n;j++){
			mm[j]=a[j];
			for(int k=i;k<j;k++){
				if(mm[j]==mm[k]){
					for(int l=k;l<j;l++){
						mm[l]=0;
					}
				}
			}
		}for(int j=i;j<=n;j++){
			if(mm[j]!=0){cnt[mm[j]]++;}
		}
	}for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}

