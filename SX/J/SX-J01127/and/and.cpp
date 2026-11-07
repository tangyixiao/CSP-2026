#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
	int amax=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>amax)amax=a[i];
		}cout<<amax;
	}
	if(m==n){int g=a[0];
		for(int i=1;i<n;i++){
			g=g&a[i];
		}cout<<g;
		}
	if(m==2){
		int l=(n-1)*n;
		int y[l]={0};
		int q=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i!=j){y[q]=a[i]&a[j];q++;}
			}
		}
		int lmax=y[0];
		for(int i=0;i<l;i++){
			if(y[i]>lmax)lmax=y[l];
		}
		cout<<lmax;
	}
	return 0;
}