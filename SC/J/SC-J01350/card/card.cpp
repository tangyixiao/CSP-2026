#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],w[300010],ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >>n >>m;
	for(int i=1;i<=n;i++){
		cin >>a[i];
	}
	if(n<=5000){
		for(int i=1;i<=n;i++){
			memset(w,0,sizeof(w));
			for(int j=i;j<=n;j++){
				if(w[a[j]]){
					for(int k=w[a[j]]+1;k<=j;k++){
						w[a[k]]=0;
					}
				}
				w[a[j]]=j;
			}
			for(int j=1;j<=m;j++){
				if(w[j]){
					ans[j]++;
				}
			}
		}
		for(int i=1;i<=m;i++){
			cout <<ans[i] <<" ";
		}
	}
	else{
		for(int i=1;i<=n;i++){
			while(a[i]==a[i+1]){
				i++;
			}
			ans[a[i]]=i; 
		} 
		for(int i=1;i<=m;i++){
			cout <<ans[i] <<" ";
		}
	}
	return 0;
}
//红橙黄绿？ 
//100+100+100+40