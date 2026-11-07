#include<bits/stdc++.h>
using namespace std;
int a[300001];
int s[300001];


int main() {
	ios::sync_with_stdio(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m;
	cin >> n >> m;
	queue<int>q,p;
	for(int i=1;i<=n;i++){
		int b;
		cin>>b;
		q.push(b);
		a[b]++;
		if(a[b]==2){
			do{
				a[q.front()]--;
				q.pop();
			}while(q.front()!=b);
		}
	}
	for(int i=1;i<=m;i++){
		s[i]+=min(1,a[i]);
	}
	for(int i=1;i<=n-1;i++){
		while(!q.empty()){
			p.push(q.front());
			q.pop();
		}
		int b=p.front();
		p.pop();
		q.push(b);
		a[b]++;
		if(a[b]==2){
			do{
				a[q.front()]--;
				q.pop();
			}while(q.front()!=b);
		}
		
		
		
		for(int i=1;i<=m;i++){
			s[i]+=min(1,a[i]);
		}
		
		
		
		
		
		
		
		
		
	}
    for(int i=1;i<=m;i++){
		cout<<s[i];
	}
	

	
	return 0;
}