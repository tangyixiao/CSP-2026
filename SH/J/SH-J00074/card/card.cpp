#include<bits/stdc++.h>
using namespace std;
int a[200005],s[200005],pre[200005],sum[200005],flag;
int main(){
	freopen("card.in","r",stdin);//Trick||Treat!
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	//	if(i!=1){
	//		if(a[i]<a[i-1]) flag=1;
	//	}
		//flag[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		memset(pre,0,sizeof(pre));
		int r=i;
		for(int l=i;l<=n;l++,r++){
			if(pre[a[l]]){
				for(int k=pre[a[l]];k<l;k++){
					if(pre[a[k]]==0) continue;
					pre[a[k]]=0;
					sum[a[k]]--;
				}
				pre[a[l]]=l;
				sum[a[l]]++;
			}else{
				pre[a[l]]=l;
				sum[a[l]]++;
			}
			//for(int i=1;i<=m;i++){
				//cout<<sum[i]<<" ";
			//}
			//cout<<endl;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<" ";
	}
}
