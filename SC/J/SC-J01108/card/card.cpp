#include<bits/stdc++.h>
using namespace std;

const int N=500005;
int n,m,a[N],t[N];

int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m<=2){
		for(int i=0;i<n;i++){
			bool f[3]={0};
			for(int j=i;j<n;j++){
				if(f[1]&&a[j]==1)	f[2]=0;
				if(f[2]&&a[j]==2)	f[1]=0;
				f[a[j]]=1;
			}
			t[1]+=f[1];
			t[2]+=f[2];
		}
	}
	else if(n<=500){
		for(int i=0;i<n;i++){
			bool f[N]={0};
			for(int j=i;j<n;j++){
				if(f[a[j]]){
					for(int s=i;s<j;s++){
						f[a[s]]=0;
					}
				}
				f[a[j]]=1;
			}
			for(int j=1;j<=m;j++){
				t[j]+=f[j];
			}
		}
	}
	else{
		for(int i=0;i<n;i++){
			t[i]+=n;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<' ';
	}
	return 0;
}