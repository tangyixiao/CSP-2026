#include<bits/stdc++.h>
using namespace std;
int n,m,c[500010],a[500010],b[300010],k,h,l,q;
void solveA(){
	for(int i=1;i<=n-1;i++){
		if(a[i]!=a[i+1]){
			b[++h]=i;
		}
	}
	b[m]=n;
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=a[i-1])k++;
	}
	if(k==n){
		solveA();
		return 0;
	}
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=l;j++){
			c[j]=0;
		}
		l=0;
		for(int j=i;j<=n;j++){
			q=0;
			for(int p=1;p<=l;p++){
				if(a[j]==c[p]){
					q=p;
					break;
				}
			}
			if(q==0){
				c[++l]=a[j];
			}else{
				for(int p=q;p<=l;p++){
					a[p]=0;
				}
				l=q;
				c[q]=a[j];
			}
		}
		for(int j=1;j<=l;j++){
			b[c[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}