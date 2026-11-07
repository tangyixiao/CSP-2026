#include<bits/stdc++.h>
using namespace std;
const int N=5*1e6;
int a[N],b[N];
bool st[N];
map<int,int> stay;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[n];
	for(int i=1;i<=n;i++){//game turn
		memset(b,0,sizeof(b));memset(st,true,sizeof(st));
		int cnt=0;
		for(int j=i;j<=n;j++,cnt++){//card
			b[cnt]=a[j];
			for(int k=0;k<cnt;k++)//same card
				if(b[k]==b[cnt]&&st[k]){
					for(int l=k;l<cnt;l++) st[l]=false;//delete card
					break;
				}
		}
		for(int j=0;j<=cnt;j++) if(st[j]) stay[b[j]]++;//count card
	}
	for(int i=1;i<=m;i++) cout<<stay[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
const int N=5*1e6;
int a[N];
map<int,int> stay;
int main(){
	freopen("card1.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	stack<int> q;
	for(int i=1;i<=n;i++) cin>>a[n];
	for(int i=1;i<=n;i++){
		bool st=false;
		while(!q.empty()) q.pop();
		for(int j=i;j<=n;j++){
			stack<int> p;
			while(!q.empty()){
				int u=q.top();q.pop();p.push(u);
				if(u==a[j]){
					while(!p.empty()) p.pop();
					st=true;
				}
			}
			while(!p.empty()) q.push(p.top()),p.pop();
			if(!st) p.push(a[j]);
		}
		while(!q.empty()){
			int u=q.top();q.pop();
			stay[u]++;
		}
	}
	for(int i=1;i<n;i++) cout<<stay[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
*/
