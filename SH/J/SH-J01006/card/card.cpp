#include<bits/stdc++.h>
using namespace std;
const int N=300005;
int len;
int st[N];
int cd[N];
int cnt[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>cd[i];
	}
	for(int i=1;i<=n;++i){
		len=0;
		for(int j=i;j<=n;++j){
			len++;
			st[len]=cd[j];
			for(int k=1;k<len;++k){
				if(st[k]==cd[j]){
					len=k;
				}
			}
		}
		for(int j=1;j<=len;++j){
			cnt[st[j]]++;
		}
	}
	for(int i=1;i<=m;++i){
		cout<<cnt[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
