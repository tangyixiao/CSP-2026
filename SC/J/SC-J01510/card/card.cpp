#include<bits/stdc++.h>
using namespace std;

const int N=6e5;
int n,m,a[N],sum[N];
int vis[N];
stack<int> ss;

int in(){
	char c=getchar();
	int f=1,k=0;
	while(c<'0'||c>'9'){
		if(c=='-'){
			f=-1;
		}
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		k=k*10+c-'0';
		c=getchar();
	}
	return k*f;
	
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=in();m=in();
	for(int i=1;i<=n;i++){
		a[i]=in();
	}
	for(int i=1;i<=n;i++){
//		cout<<"---------------------"<<endl;
//		if(ss.empty())cout<<i<<endl;
		for(int j=i;j<=n;j++){
			ss.push(a[j]);
			vis[a[j]]++;
		}
//		while(!ss.empty()){
//			cout<<ss.top()<<endl;
//			ss.pop();
//		}
		for(int j=i;j<=n;j++){
//			cout<<vis[a[j]]<<endl;
			if(vis[a[j]]){
				int x=ss.top();
				
				while(vis[a[j]]>0){
					ss.pop();
					vis[x]--;
					if(ss.empty()){
						break;
					}
					x=ss.top();
				}
//				ss.pop();
				vis[a[j]]++;
				ss.push(a[j]);
//				cout<<x<<" ";
//				vis[a[j]]--;
			}else{
				ss.push(a[j]);
				vis[a[j]]++; 
				
			}
		}
		while(!ss.empty()){
			int x=ss.top();
			if(vis[x])sum[x]++;
//			cout<<x<<" ";
			vis[x]=0;
			ss.pop();
		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<" ";
	}
	return 0;
} 
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/
