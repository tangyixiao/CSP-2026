#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],t[300010];
bool b[300010]
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int T=1;T<=n;T++){
		int p=0;
		for(int i=T;i<=n;i++){
			if(b[a[i]]){
				
			}
			else{
				b[a[i]]=1;
				t[a[i]]=i;
				p++;
			}
		}
	}
	return 0;
}