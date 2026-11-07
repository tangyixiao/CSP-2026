#include<bits/stdc++.h>
using namespace std;
int n,m;
int vis[300010];
int a[300010];
int b[300010];
stack<int> t;
int w;
int ans=0;
int main(){
	freopen("crad.in","r",stdin);
	freopen("crad.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>b[i];
	}
    while(ans<=n){
    //cout<<endl;
    memset(vis,0,sizeof(vis));
    ans++;
      for(int i=ans;i<=n;i++){
      	int w=b[i];
      	//cout<<w<<" "<<i<<"   ";
    	if(vis[w]>=1){
    		while(t.top()!=w){
    			vis[t.top()]--;
    			t.pop();
			} 
		}else{
			t.push(w);
			vis[w]++;
		}
     }
	 while(!t.empty()){
	 	//cout<<t.top()<<" ";
	 	a[t.top()]++;
	 	t.pop();
	 }	
	}
    for(int i=1;i<=m;i++){
    	cout<<a[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
