#include<bits/stdc++.h>
using namespace std;
string s;
int a[500005],w[500005],l[500005],n,m,len,b[500005];
long long ct;
char e;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
	    stack<int>q;
		for(int j=i;j<=n;j++){
			if(b[a[j]]!=1){
				b[a[j]]=1;
				q.push(a[j]);
			}
			else{
	        while(q.top()!=a[j]){
	        b[q.top()]=0;
	        q.pop();
            }
            b[a[j]]=1;
       }
		}
        while(q.empty()==0){
	        if(l[q.top()]==0){
	        	w[q.top()]++;
	        	l[q.top()]=1;
	        }
	        q.pop();
}
	    memset(b,0,sizeof(b));
	    memset(l,0,sizeof(l));
}
    for(int j=1;j<=m;j++){
		cout<<w[j]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
