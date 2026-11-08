#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+12;
int a[N];
vector<int> e[N];
int n,m; 	
int ans[N];
int cnt[N];
int card[N];
signed main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	scanf("%lld",&a[i]); 
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cnt[j]=0;
		int top=0;
		for(int j=i;j<=n;j++){
		if(cnt[a[j]]==0){
			top++;
			cnt[a[j]]=top;
			card[top]=a[j];
		}	
	    else{
	    	while(top>cnt[a[j]]){
	    		cnt[card[top]]=0;
			    top--;
			}
	    	cnt[a[j]]=top;
	}
		}
		for(int j=1;j<=top;j++){
		    ans[card[j]]++;	
		}
	}
	for(int i=1;i<=m;i++) printf("%lld ",ans[i]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
