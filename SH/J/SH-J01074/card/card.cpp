#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];//有的数 
int ans[100005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int head=1;
	for( int i = 1; i <= n; i++ ){
		cin>>a[i];
	}
	while(head <= n){
		bool found[100005]={};//是否出现 
		int c[200005]={};//当前的数 	
		int len=0;
		for( int i = head; i <= n; i++ ){
			if(!found[a[i]]){
				len++;
				c[len]=a[i];
				found[a[i]]=true;
			}else{
				int pos;
				for( int j = 1; j <= len; j++ ){
					if(c[j] == a[i]){
						pos=j;
					}
				}
				for( int j = pos; j <= len; j++ ){
					found[c[j]]=false;
				}
				c[pos]=a[i];
				found[a[i]]=true;
				len=pos;
			}
		}
		for( int i = 1; i <= m; i++ ){
			if(found[i] == true){
				ans[i]++;
			}
		}
		head++;
	}
	for( int i = 1; i <= m; i++ ){
		cout<<ans[i]<<" ";
	}
	return 0;
}
