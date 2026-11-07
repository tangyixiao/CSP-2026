#include<bits/stdc++.h>
using namespace std;
int n,m,x[50000];
int ans[10000];
int c[10000],next;
int exist[10000];
int pos[10000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int a=0;a<n;++a){
		cin>>x[a];
	} 
	for(int a=0;a<n;++a){
		for(int b=a;b<n;++b){
			if(exist[x[b]]){
				for(int c2=pos[x[b]]+1;c2<10000;++c2){
					c[c2]=0;
					exist[x[c2]]=0;
				}
				next=pos[x[b]]+1;
			}
			else{
				pos[x[b]]=next;
				c[next]=x[b];
				exist[x[b]]=1;
				next++;
			}
		}
		for(int b=1;b<=m;++b){
			ans[b]+=exist[b];
		}
	}
	for(int a=1;a<=m;++a){
		cout<<ans[a]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
