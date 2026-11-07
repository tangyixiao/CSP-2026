#include <iostream>
#include <stdio.h>
using namespace std;

int n,m;
int a[2][500005];
int fa[300005];
int sa[300005];
int lp[300005];


void s(int st,int ed){
	for(int i=st;i<=ed;i++){
		if(a[1][fa[a[0][i]]]==3){
			sa[a[0][i]]++;
			int j=ed;
			while(a[0][i]!=a[0][j]){
				j--;
			}
			i=j;
		}else{
			sa[a[0][i]]++;
		}
	}
	
}

int main()
{
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	
	
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[0][i];
		if(fa[a[0][i]]==0){
			fa[a[0][i]]=i;
			a[1][i]=1;
		}else{
			a[1][i]=1;
			if(lp[a[0][i]]==0){
				a[1][fa[a[0][i]]]=3;
			}else{
				a[1][lp[a[0][i]]]=3;
			}
			lp[a[0][i]]=i;
		}
		
	}
	
	for(int i=1;i<=n;i++){
		s(i,n);	
	}
	
	for(int i=1;i<=m;i++){
		cout << sa[i] << ' ';
	}
	
	
	return 0;
}