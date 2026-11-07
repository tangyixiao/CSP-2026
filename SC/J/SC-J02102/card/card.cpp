#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn=5e5+5;
int a[maxn],b[maxn];
int main(){
	//freopen("card.in","r",stdin);//打开输入文件
	//freopen("card.out","w",stdout);//打开输出文件
	
	ios::sync_with_stdio(0);//快读快写
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[a[j]]==0){
				a[a[j]]+=1;
				b[j]+=1;
			}else{
				for(int k=1;k<=m;k++){
					if(k>a[j]){
						b[k]=0;
						a[k]=0;
					}
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}