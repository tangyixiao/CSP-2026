#include<bits/stdc++.h>
using namespace std;
long long a[500005],l[300005],s[300005],p=1,b[300005];
int n,m;
void start(){
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(l[a[j]]!=0) {
				for(int k=i;k<=m;k++){
					if(s[k]==a[j]){
						for(int w=k;w<=n;w++) l[s[w]]--;
					} 
				}
			}
			l[a[j]]++;
			s[p++]=a[i];
		} 
		for(int i=1;i<=m;i++){
			b[i]+=l[i];
		}
	}
}
int main(){
    freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	start();
	for(int i=1;i<=m;i++) cout<<b[i]<<" ";
	return 0;
}
