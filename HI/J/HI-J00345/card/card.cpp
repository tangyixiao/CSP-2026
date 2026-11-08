#include<bits/stdc++.h>
using namespace std;
long long s[500010],x[300010],ans[300100];
long long use[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	int len=1;
	for(int k=1;k<=n;k++){
		len=1;
		use[len]=s[k];
		len++; 
		x[s[k]]++;
		for(int i=k+1;i<=n;i++){
			if(x[s[i]]>=1){
				for(int j=i;j>=1;j--){
					x[s[j]]--;
					if(s[j]==s[i]){
						len=j;
					}
				}
			}
			use[len]=s[i];
			len++;
			x[s[i]]++;
		}
		for(int i=1;i<len;i++){
			ans[use[i]]++;
		}
		for(int i=1;i<=m;i++){
			x[i]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout <<ans[i]<<' ';
	}
	return 0;
}

