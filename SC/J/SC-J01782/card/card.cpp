#include<iostream>
#include<bitset>
using namespace std;
const int N = 5e3+5;
const int M = 3e3+5;
bitset<M> b[N];
int a[N];
int ans[M];
int first_pos[M];
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		scanf("%d",a+i);
	}
	for(int i = n;i >= 1;i--){
		if(!first_pos[a[i]]){
			first_pos[a[i]] = i;
		}
		b[i][a[i]] = 1;
		b[i]|=b[first_pos[a[i]]+1];
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			ans[j] += b[i][j];
		}
	}
	for(int i = 1;i <= m;i++)printf("%d ",ans[i]);
	return 0;
}