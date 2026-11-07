#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int card[N]; 
int a[N];
int cnt[N];
int n,m,xb=1; 
bool flag=false;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","W",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){//循环局数 
		for(int j=i;j<=n;j++){//循环从第几张开始放 
			for(int k=1;k<=j-1;k++){//循环检查是否有相同的 
				if(card[k]==a[j]){//如果有就循环删除 
					for(int jk=k;jk<=j-1;jk++){
						card[jk]=0;
						xb=k;
					}
					card[++xb]=a[j];
					flag=true;
				}
			}
			if(!flag) card[++xb]=a[j];
		}
		for(int i=1;i<=xb;i++){
			cnt[card[i]]++;
		}
		cout<<endl;
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}

/*
4 3
1 2 1 3*/
