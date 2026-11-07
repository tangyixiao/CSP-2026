#include<bits/stdc++.h>
using namespace std;

const int mn=5e5+2,mm=3e5+2,mi=5e5+2,ma=3e5+2;
int n,m;
int a[mn];
int v[mn];
bool cnt[mm];
int k;
int ans[mm];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d",&n);
	scanf("%d",&m);
	vector<int> v(n+2,0);
	v[0]=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		k=1;
		for(int j=i;j<=n;j++){
			if(cnt[a[j]]==0){
				cnt[a[j]]=1;
				v[k++]=a[j];
			}else{
				while(k>1&&v[--k]!=a[j]){
					cnt[v[k]]=0;
					v[k]=0;
				}
				if(k==1){
					v[k]=a[j];
				}
				k++;
			}
		}
		for(int j=1;j<k;j++){
			cnt[v[j]]=0;
			ans[v[j]]++;
			v[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}