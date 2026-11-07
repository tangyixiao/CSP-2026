#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=1e6+10;
long long a[N];
long long t[N];

int len=0;
long long hh[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	bool f=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) f=0;
	}
	if(f==1){
		for(int i=1;i<=m;i++){
			cout<<i<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		stack<long long> q;
		memset(t,0,sizeof(t));
		for(int j=i;j<=n;j++){
			if(t[a[j]]==0){
				q.push(a[j]);
				t[a[j]]=1;
//				cout<<"$$$$$$$$$$$$"<<a[j]<<"\n";
			}
			else{
//				cout<<"&&&&&&&&&&&&&&"<<a[j]<<"\n";
				while(q.top()!=a[j]){
//					cout<<"!!!!!!!!!!!!"<<q.top()<<"\n";
					t[q.top()]=0;
					q.pop();
				}
			}
		}
		while(!q.empty()){
			hh[q.top()]++;
			q.pop();
		}
//		for(int j=1;j<=m;j++){
//			cout<<t[i]<<" ";
//		}
//		cout<<"\n";
	}
	for(int i=1;i<=m;i++){
		cout<<hh[i]<<" ";
	}	
	return 0;
}