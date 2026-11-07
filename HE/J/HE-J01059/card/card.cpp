#include<bits/stdc++.h>
using namespace std;
struct pp{
	int f1,f2;
}f[500009];
int a[500009];
bool c[300009];
int d[300009];
int e[300009];
bool cmp(pp pp1,pp pp2){
	return pp1.f1<pp2.f1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int j=1;
	for(int i=0;i<500009;i++){
		f[i].f1=999999;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(c[a[i]]==0){
			d[a[i]]=i;
			c[a[i]]=1;
		}
		else{
			f[j].f1=d[a[i]];
			f[j].f2=i;
			d[a[i]]=i;
			j++;
		}
	}
	sort(f+1,f+j+1,cmp);
	for(int i=1;i<=n;i++){
		int k=1;
		while(f[k].f1<i){
			k++;
		}
		for(int l=i;l<=n;l++){
			if(f[k].f1<l){
				k++;
				l--;
				continue;
			}
			if(l<f[k].f1){
				e[a[l]]++;
			}
			else{
				l=f[k].f2;
				k++;
				l--;
			}
		}

	}
	for(int i=1;i<=m;i++){
		cout<<e[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
