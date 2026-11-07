#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],cnt1[300005],cnt2[300005],mx,b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(cnt1[a[j]]==0){
				cnt1[a[j]]++;
			}
			else{
				cnt1[a[j]]++;
				for(int o=i;o<=j-1;o++){
					if(a[o]==a[j]&&b[o]!=0){
						for(int h=o;h<=j-1;h++){
							if(cnt1[a[h]]>0) cnt1[a[h]]--;
							b[h]==0;
						}
						break;
					}
				}
			}
		}
		for(int p=1;p<=n;p++) b[p]=a[p];
		for(int l=1;l<=m;l++){
			cnt2[l]+=cnt1[l];
		}
		for(int j=1;j<=m;j++) cnt1[j]=0;
	}
	for(int i=1;i<=m;i++){
		cout<<cnt2[i]<<' ';
	}
	return 0;
} 
