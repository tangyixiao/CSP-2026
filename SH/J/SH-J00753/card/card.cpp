#include<bits/stdc++.h>
using namespace std;
int a[500009],num[500009],ans[300009];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,b,top=1,cmp=0,ntop=0;
	int A=0,B=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>num[i];
		if(num[i]<num[i-1]){
			A=1;
		}
	}
	
	if(A==0){
		for(int i=1;i<=n;i++){
			ans[num[i]]++;
		}
		for(int i=1;i<n;i++){
			ans[i]+=ans[i-1];
		}
		for(int i=1;i<=n;i++){
			cout<<ans[i]<<" ";
		}
		return 0;
	}
	
	for(int i=1;i<=n;i++){
		for(int k=i;k<=n;k++){
			b=num[k];
			for(int j=1;j<=top;j++){
				if(cmp==1){
					a[j]=0;
				}else{
					if(a[j]==b) cmp=1;
					ntop=j+1;
				}
			}
			if(cmp!=1) {
				a[top]=b;
				top++;
			}else{
				top=ntop;
				cmp=0;
			}
		}
		for(int j=1;j<=top;j++){
			ans[a[j]]++;
			a[j]=0;
		}
		top=1;
	}
	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
