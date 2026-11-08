#include <bits/stdc++.h>
using namespace std;
struct f{
	int s;
	int l;
};
f flag[500100];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	int n,m,a[500005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	int cnt[500005];
	for(int i=1;i<=n;i++){
	    for (int k=1;k<=m;k++){
	    	flag[k].l=0;
	    	flag[k].s=0;
		}
		int st[500100];
		int q=1;
		
		for(int j=i;j<=n;j++){
			st[q++]=a[j];
			if(flag[a[j]].s==1){
				for (int z=flag[a[j]].l;z<j;z++){
					st[z]=0;
				}
			}
			else {
				flag[a[j]].s=1;
				flag[a[j]].l=q-1;
			}
		}
		for(int o=1;o<q;o++){
			cnt[st[o]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
