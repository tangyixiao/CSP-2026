#include<bits/stdc++.h>
using namespace std;
int a[500001];
struct aaa{
	int c;
	int w;
	int s;
}d[500001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			d[j].c=d[j].w=0;
		}
        int y=1;
        for(int j=i;j<=n;j++){
            if(d[a[j]].c==1){
                for(int x=d[a[j]].w+1;x<j;x++){
                	d[a[x]].c=0;
				}
			}
			d[a[j]].c=1;
			d[a[j]].w=j;
			if(j==n){
				for(int x=1;x<=m;x++){
					if(d[x].c==1){
						d[x].s++;
					}
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<d[i].s<<' ';
	}
	}