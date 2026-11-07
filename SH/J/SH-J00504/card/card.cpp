#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[300006],ans[300006];
stack<int> s;
stack<int> q;
int bb[500006];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
        cin>>bb[i];
	}
	for(int i=n;i>=1;i--){
        s.push(bb[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)a[j]=0;
        for(int j=n;j>=1;j--){
            s.push(bb[j]);
        }
        for(int j=1;j<=i-1;j++){
            s.pop();
        }
        for(int j=i;j<=n;j++){
            int x=s.top();
            s.pop();
            if(a[x]==0){
				q.push(x);
            	a[x]++;
            }else{
				while(!q.empty()){
					if(q.top()==x){
						a[x]--;
						q.pop();
						break;
					}
                    a[q.top()]--;
                    q.pop();
            	}
				q.push(x);
            	a[x]++;	
			}
        }
        for(int j=1;j<=m;j++){
            if(a[j]>0)ans[j]++;
        }
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
