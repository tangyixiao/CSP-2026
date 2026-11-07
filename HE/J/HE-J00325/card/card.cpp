#include<bits/stdc++.h>
using namespace std;

queue<int>q;
queue<int>p;
int cnt[1001];
int main(){
    freopen(card.in,"r",stdin);
    freopen(card.out,"w",stdout);
    int n,m;
    cin>>n>>m;
    int a;
    cin>>a;
    q.push(a);
    for(int i=2;i<=n;i++){
    	cin>>a;
    	q.push(a);
    	int x;
		x=q.push(a);
    	if(x=q.top()){
    		for(int k=1;k<=q.size();k++){
    			int c;
				c= q.pop();
				for(int d=1;d<=m;d++){
					if(d==c){
						cnt[d]++;
					}
				}
    			p.push(c);
    			
			}
		}
    	for(int j=1;j<=n;j++){
    		int x=q.push(a);
    	    if(x=q.top()){
    		    for(int k=1;k<=q.size();k++){
    			    int c;
				    c= q.pop();
				    for(int d=1;d<=m;d++){
				    	if(d==c){
				    		cnt[d]++;
				    	}
				    }
    			    p.push(c);
			    }
		    }
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
    
    return 0;

}
