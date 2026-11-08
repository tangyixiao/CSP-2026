#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[500005],b[500005],c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	b[1]=a[1];
	for(int i=n;i>=1;i--){
		while(n-i+1){
			for(int l=1;l<=n;l++){
				if(a[i]==b[l]){
					for(int q=l;q<=n;q++){
						b[q]=0;
					}
					b[l]=a[i];
				}else{
					continue;
				}
			} 
		}
	}
	for(int i=1;i<=n;i++){
		cout<<b[i];
	}
	return 0;
}
