#include<bits/stdc++.h>
using namespace std;
int cards[500010];
int usc[500010];
int times[300010];
int table[500010];
void sdel(int a[],int l,int r){
	for(;l<=r;l++){
		a[l]=0;
	}
}
int sfind(int a[],int l,int r,int fin){
	for(;l<=r;l++){
		if(a[l]==fin) return l;
	}
	return -1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>cards[i];
	}
	for(int j=1;j<=n;j++){
		for(int i=0;i<=n;i++){
			table[i]=0;
		}
		int x=1;
		for(int i=1;i<=n;i++){
			usc[i]=cards[i];
		}
		for(int i=j;i<=n;i++){
			int pos=sfind(table,1,x,usc[i]);
			if(pos==-1){
				table[x]=usc[i];
				x++;
			}
			else{
				sdel(table,pos,x);
				x=pos;
				table[x]=usc[i];
				x++;
			}
		}
		for(int i=1;i<=x;i++){
				times[table[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<times[i]<<" ";
	}
	return 0;
} 