#include<bits/stdc++.h>
using namespace std;
long long a[500005],m1[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long ans[m+1];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int x=0,id=0;
			for(int q=1;q<=n;q++){
				if(a[j]==ans[q]){
					x++;
					id=q;
					break;
				} 
			}
			if(x==0){
				ans[j]=a[j];
			}
			else{				
				for(int q=id;q<=j;q++){
					ans[q]=0;
				}
				ans[j]=a[j];
			}
		}
		for(int j=1;j<=n;j++){
			if(ans[j]!=0) m1[ans[j]]++;
			ans[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<m1[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}