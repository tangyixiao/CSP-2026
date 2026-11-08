#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N=2e5+5;
ll w[N], e[N];

bool cmp(int x, int y){
	return x>y;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n, m;
	cin>>n>>m;
	int p=0;
	for(int i=1;i<=n;i++){
		scanf("%lld",&w[i]);
	}
	
	sort(w+1,w+n+1,cmp);
	
	ll mi_p=0, ma_p=-1;
	for(int i=1;i<=n;i++){
		if((~w[i])|0==0){
			p++;
			e[p]=i;
			if(p<=m){
				mi_p=i;
			}
			if(p==1){
				ma_p=i;
			}
		}
	}
	
	int i=1, j=i+1;
	ll anp=-1, cnt=0;
	while(j<=n){
		if(w[i]!=w[j]){
			if(cnt>=m){
				anp=i;
				break;
			}
			else{
				if(p>=m-cnt){
					bool l=0;
					for(int k=1;k<=p-m+cnt;k++){
						if(w[e[k]]<w[i]){
							l=1;
							break;
						}
						if(w[e[k]]==w[i]){
							cnt++;
							continue;
						}
					}
					if(!l){
						anp=i;
						break;
					}
				}
			}
			cnt=0;
			i=j;
		}
		j++;
	}
	
	if(p>=m && w[mi_p]>w[anp]){
		cout<<w[mi_p];
	}
	else{
		cout<<w[anp];
	}
	return 0;
}
