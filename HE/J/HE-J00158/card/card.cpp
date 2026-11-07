#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010],b[300010];
int a1[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	int n1=n,i=1;
	while(i<=n){
		n1=n-i+1;
		for(int i1=1,i2=1;i1<=n1&&i2<=n;++i1,++i2){
			
			a1[i1]=a[i2+i-1];
			for(int j=1;j<i1;++j){
				if(a1[i1]==a1[j]){
					n1=n1-i1+j;
					i1=j+1;
					j=i1;
				}
			}
		}
		for(int i1=1;i1<=n1;++i1){
			b[a1[i1]]++;
			cout<<a1[i1]<<" ";
		}
		cout<<endl<<endl;
		++i;
	}
	for(int i=1;i<=m;++i){
		cout<<b[i]<<" ";
	}
	return 0;
}
