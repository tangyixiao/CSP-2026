#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],s[300005][2];
stack<int> p,b;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		while(!b.empty()){
			b.pop();
		}
		while(!p.empty()){
		    if(a[i]==p.top()){
		    	break;
		    }	
			b.push(p.top());
			p.pop();
			if(a[i]==p.top()){
				p.pop();
				p.push(a[i]);
		    	break;
		    }
		}
		if(p.empty()){
			while(!b.empty()){
				p.push(b.top());
				b.pop();
			}
			p.push(a[i]);
		}
	}
	while(!p.empty()){
		s[p.top()][1]++;
	}
	for(int i=1;i<=m;i++){
		cout<<s[i][1]<<" ";
	}
	return 0;
}