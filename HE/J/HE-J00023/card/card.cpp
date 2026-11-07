#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[30005],ans[30005]={},cnt,b[30005],c=0; 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	c=n;
	for(int i=1;i<=c;i++){
		ans[a[i]]++;
		for(int j=1;j<=n;j++){
			if(ans[j]=='2'){
				ans[j]=0;
				if(cnt<=m){
					b[cnt]++;
				}
				cnt=0;
				c--;
			}
		}
		ans[a[i]]++;
		cnt+=a[i];
	}
	for(int i=1;i<=m;i++){
		if(b[i]!=0)cout<<b[i];
	} 
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
