#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100005];
int b[100005];
a[0]=0;
queue<int> q;
bool sot(int b){
	if(b==a[i-1]){
		return 1;
	}
	else{
		sot(a[i-1]);
		if(b==0) return 0;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++){
		if(sot(a[i]))(
		q.pop(i-1);
		)
		else{
			q.push(a[i]);
		}
		for(int i=1;i<=q.size();i++){
			b[i]=q.pop();
		}
	}
	return 0;
}

