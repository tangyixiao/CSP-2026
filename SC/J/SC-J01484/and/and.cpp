#include<bits/stdc++.h>
using namespace std;

int main(){
	int maxn=0;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n],cot[n],b[n]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
		for(int j=log(a[i])+1;j>0;j--){
			if(a[i]>=j*2){
				a[i]-=j*2;
				cot[i]++;
			}else{
				continue;
			}
			if(a[i]==1){
				cot[i]++;
				break;
			} 
		}
		for(int j=i+1;j>i&&j<=n&&i!=n;j++){
			maxn=max(cot[i],cot[j]);
		}	
	}
	cout<<maxn;
	return 0;
}