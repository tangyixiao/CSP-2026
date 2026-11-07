#include <bits/stdc++.h>
using namespace std;
stack<int> s;
int n,m;
const int N=5e5+5,M=3e5+5;
bool v[M];
int a[N],b[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(v[a[i]]){
				while(1){
					if(s.top()==a[i])
						break;
					v[s.top()]=0;
					s.pop();
				}
			}
			else{
				v[a[i]]=1;
				s.push(a[i]);
			}
		}
		for(int i=1;i<=m;i++){
			if(v[i]){
				b[i]++;
			}
		}
//		for(int i=1;i<=m;i++)
//			cout<<b[i]<<" ";
//		cout<<"\n";
		while(!s.empty())
			s.pop();
		memset(v,0,sizeof(v));
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
} 