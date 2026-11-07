#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[500005],num[300005],table[500005];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n=0,m=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	//cout<<"hhah"<<' ';
	for(int i=1;i<=n;i++){//局数 
		int ii=1;
		for(int j=i+1;j<=n;j++){//牌数 
			for(int k=1;k<=ii;k++){//查重 
				if(table[k]==a[j]){
					for(int l=k;l<=ii;l++){//删除 
						table[l]=0;
					}
				}
				ii-=(ii-k);
				table[k]=a[j];
			}
		}
//		for(int j=1;j<=m;j++){
//		cout<<num[j]<<'\n';
//	}
		for(int j=1;j<=m;j++){//统计
			for(int k=1;k<=ii;k++){
				if(table[k]==j){
				//	cout<<"hhhhhss"<<' ';
					num[j]++;
					break;
				}
			} 
		}
	}
	for(int i=1;i<=m;i++){
		cout<<num[i]<<' ';
	}
	return 0;
}
