#include<bits/stdc++.h> 
using namespace std;
long long n,m,a[500005],b[500005],cn[500005],len=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	len=1;
	for(int i=1;i<=m;i++){
		b[1]=a[i];
		for(int k=i+1;k<=n;k++){
			for(int j=1;j<=len;j++){
				if(b[j]==a[k]){//如果b中含有这一项，那么全部清空并只有a[k] 
					for(int l=1;l<=len;l++){
						b[l]=-1;
					}
					len=1;
					b[1]=a[k];
				}else{
					b[len+1]=a[k];
					len++;
				}
			}	
		}
		for(int j=1;j<=len;j++){
			if(b[j]>=0){
				cn[b[j]]++;
				//cout<<b[j]<<endl;
			}
		}
	}
	for(int i=0;i<=500005;i++){
		if(cn[i]>0){
			cout<<cn[i]<<" ";
		}
	}
	return 0;
}
