#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000010]={0};
int b[1000010]={0};
int c[1000010]={0};
int cnt[100010]={0};
int index=0;
void push(int a){
	index++;
	b[index]=a;
}
void cut(void){
	index--;
}
int top(void){
	return b[index];
}
void clear(int x){
	index=x-1;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(c[a[j]]!=0){
				int x=0;
				for(int z=1;z<=index;z++){
					if(b[z]==c[a[j]]){
						x=z;
					}
				}
				for(int z=x;z<=index;z++){
					c[a[b[z]]]=0;
				}
				clear(x);
				c[a[j]]=j;
				push(j);
			}
			else{
				c[a[j]]=j;
				push(j);
			}
		}
		for(int j=1;j<=index;j++){
			cnt[a[b[j]]]++;
			c[a[b[j]]]=0;
		}
		clear(1);
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
} 

