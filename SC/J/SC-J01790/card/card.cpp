#include<bits/stdc++.h>
using namespace std;
int m,n,a[1000000],b[1000000],c[1000000],z[1000000],y[1000000],s,t,x;
int main(){
	freopen("card.in","r",stdin);
	cin>>m>>n;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		s=m-i;
		t=m;
		while(s==0){
			b[m-s]=a[m-s];
			x=b[m-s];
			if(c[x]==0){
				c[x]++;
				z[x]=m-s;
			}
			else{
				for(int j=z[x];j<m-s-1;j++){
					b[j]=0;
				}
				m-=m-z[x]-1;
			}
			s--;
		}
		for(int o=0;o<n;o++){
			t=b[o];
			y[t]++;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<y[i]<<" ";
	}
	freopen("card.out","w",stdout);
	
	return 0;
}
