#include<bits/stdc++.h>
using namespace std;
int nextt[500009];
int k[500009];
int n,m;
int a[500009];
int times[500009];
struct node{
	int nxt;
	int value;
	mutable int tms;
};
int duiying[500009];
node no[500009];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr); 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(k[a[i]]==0){
			k[a[i]]=i;
		}
		nextt[i]=k[a[i]];
	}
	int cnt=0;
	for(int i=n;i>=1;i--){
		if(nextt[i]==i){
			cnt++;
			duiying[a[i]]=cnt;
			if(i==n)
				no[cnt].nxt=0;
			else
				no[cnt].nxt=duiying[a[i+1]];
			no[cnt].value=a[i];
			no[cnt].tms=1;
		}
		else {
			no[duiying[a[i]]].tms+=1;
		}
	}
	for(int i=cnt;i>=1;i--){
		times[no[i].value]=no[i].tms;
		no[no[i].nxt].tms+=no[i].tms;
	}
	for(int i=1;i<=m;i++){
		cout<<times[i]<<" ";
	}
	cout<<'\n';
	fclose(stdin);
	fclose(stdout);
	return 0;
}
