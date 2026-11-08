#include<bits/stdc++.h>
using namespace std;
bool card(int a[],int x,int m,int l,int di){
	int c[m],q[m],sum=0;
	for(int i=x-1;i<l;i++){
		c[a[i]]++;
		q[a[i]]=i;
		if(c[a[i]]>1){
			for(int j=0;j<i-q[a[i]];j++){
				for(int k=0;k<l;k++){
					a[k]=a[k+1];
				}
			}
		}
	}
	for(int i=0;i<sizeof(a);i++){
		if(a[i]==di) return true;
	}
}
int main(){
	freopen("card.in","w",stdin);
	freopen("card.out","r",stdout);
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int final[m],y=sizeof(a);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(card(a,i,m,y,j)){
				final[j-1]++;
			}
		}
	}
	for(int i=0;i<sizeof(final);i++){
		cout<<final[i];
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
}
