#include<bits/stdc++.h>
using namespace std;
int n,m,a[50005];
int v[50005]={0};
int j[50005];
void seek (int l,int s,int v[]){
	for(int i=1;i<=l;i++){
		if(v[i]!=s){
			v[i]=0;
		}
		else{
			return;
		}
	}
}
void play(int h){
	if(h==n){
		return;
	}
	int t[50005]={0};
	int v[50005]={0};
	for(int i=h;i<=n;i++){
		if(t[a[i]]){
			seek(i,a[i],v);
			i++;
		}
		v[i]=a[i];
		t[a[i]]=1;
	}
	for(int i=1;i<=n;i++){
		j[v[i]]++;
	}
	play(h++);
	
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	play(1);
	for(int i=1;i<=m;i++){
		cout<<j[n];
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
}

