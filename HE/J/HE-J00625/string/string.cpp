#include <bits/stdc++.h>
using namespace std;

int n,x[200005];
long long m;
char c[200005];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		char d;
		cin>>x[i];
		cin>>c[i];
	}
	int t=1,w=n;
	while(t!=w){
		if(c[t]!=c[w]){
			if(x[t]==x[w]){
				m+=x[t];
				t++,w--;
				if(t==w+1){
					printf("%lld", m);
					return 0;
				}
			}
			else{
				if(x[t]>x[w]){
					m+=x[w];
					x[t]-=x[w];
					w--;
				}else{
					m+=x[t];
					x[w]-=x[t];
					t++;
				}
			}
		}else{
			if(x[t]==x[w]){
				t++,w--;
				if(t==w+1)
					t=w;
			}
			else{
				if(x[t]>x[w]){
					x[t]-=x[w];
					w--;
				}else{
					x[w]-=x[t];
					t++;
				}
			}
		}
	}
	printf("%lld", m);
	return 0;
}
