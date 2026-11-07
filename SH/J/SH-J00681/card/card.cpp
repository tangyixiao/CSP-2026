#include <iostream>
using namespace std;
int n,m,a[200005],cnt[200005];
void solveA(){
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n+1;j++){
			if(a[j]!=a[j+1]){
				cnt[a[j]]++;
			}
			else{
				j+=2;
			}
		}
	for(int i=1;i<=m;i++)
		cout<<cnt[i]<<" ";
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	solveA();
	return 0;
}
