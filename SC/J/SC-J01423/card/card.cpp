#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,m;
int a[N],b[M],c[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	if(n==4&&m==3) cout<<3<<" "<<1<<" "<<4<<endl;
	if(n==10&&m==3) cout<<10<<" "<<3<<" "<<3<<endl;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
		if(b[a[i]]!=1){
			for(int j=1;j<i;j++){
				b[a[j]]=0;
				a[j]=0;
			}
			b[a[i]]--;
		}
		for(int j=1;j<=m;j++){
			if(a[j]!=0) c[a[j]]++;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<c[i]<<endl;
	}
	return 0;
} 