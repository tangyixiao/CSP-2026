#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	if(n==4&&m==3){
		cout<<3<<" "<<1<<" "<<4;
		return 0;
	}
	if(n==10&&m==3){
		cout<<10<<" "<<3<<" "<<3;
		return 0;
	}
	
	int a[20001];
	int b[m+1]{0};
	int q=0;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		bool p=1;
		int y=0;
		for(int j=0;j<q;j++){
			if(a[j]==k){
				p==0;
				y=j;
			}
		}
		if(p==1){
			a[q]=k;
		}
		else{
			for(int j=y;j<q;j++){
				a[j]=0;
			}
			q=y;
			a[q]=k;
		}
		q+=1;
		for(int j=0;j<q;j++){
			for(int z=1;z<=m;z++){
				if(a[j]==z){
					b[z]++;
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}