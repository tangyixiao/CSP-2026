#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],x[300005],q[300005];
stack<long long> s;
long long l;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int k=1;k<=n;k++){
		for(int i=k;i<=n;i++){
			if(x[a[i]]>k){
				while(s.top()!=a[i]){
					x[s.top()]=0;
					s.pop();
					l--;
				}
			}else{
				s.push(a[i]);
				x[a[i]]=k+1;
				l++;
			}
		}
		for(int i=l;i>=0;i--){
			q[s.top()]++;
			s.pop();
		}l=0;
		continue;
	}cout<<n;
	for(int i=1;i<=m;i++){
		cout<<q[i]<<" ";
	}	
	return 0;
}