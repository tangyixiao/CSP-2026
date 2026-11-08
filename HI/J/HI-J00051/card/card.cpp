#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[500005];
int b[500005];
int c[500005];
int bj[300005];
bool bjw[500005];

int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		int ans=0;
		for(int j=1;j<=n;j++){
			b[j]=0;
			bjw[j]=false;
		}
		for(int j=1;j<=m;j++){
			bj[j]=0;
		}
		for(int j=i;j<=n;j++){
			if(bj[a[j]]!=0){
				for(int k=bj[a[j]];k<j;k++){
					bjw[k]=true;
					bj[a[k]]=0;
				}
			}
			bj[a[j]]=j;
		}
		for(int j=i;j<=n;j++){
			if(!bjw[j]) c[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}

