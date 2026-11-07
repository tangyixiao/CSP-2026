#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5;
const int MAXM=3e5+5;
int a[MAXN];
int sex[MAXM];
int card[MAXN];
int sexinside[MAXM];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)	cin>>a[i];
	for(int time=1;time<=n;time++){
		memset(card,0,sizeof(card));
		memset(sexinside,0,sizeof(sexinside));
		int len=n-time+1;
		for(int i=1;i<=len;i++)	card[i]=a[time+i-1];
//		for(int i=1;i<=len;i++)	cout<<card[i]<<" ";
//		cout<<"  ";
		int tag=1;
		for(int i=1;i<=len;i++){
			sexinside[card[i]]++;
			if(sexinside[card[i]]==2){
				for(tag;tag<i;tag++)	sexinside[card[tag]]=0;
				sexinside[card[i]]=1;
//				cout<<tag<<" ";
			}
		}
//		cout<<"\n";
		for(int i=1;i<=m;i++)	sex[i]+=sexinside[i];
	}
	for(int i=1;i<=m;i++)	cout<<sex[i]<<" "; 
	return 0;
}