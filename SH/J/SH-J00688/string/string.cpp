#include<bits/stdc++.h>
using namespace std;
long long n,pre[200010],mid,j,res;
struct Node{
	long long x;
	char c;
}node[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>node[i].x>>node[i].c;
		pre[i]=pre[i-1]+node[i].x;
	}
	for(long long i=1;i<=n;i++){
		if(pre[i]>pre[n]/2){
			mid=i;
			for(long long j=n+1;j>=mid+1;j--){
				node[j].x=node[j-1].x;
				node[j].c=node[j-1].c;
			}
			node[mid+1].c=node[mid].c;
			node[mid+1].x=node[mid].x-(pre[n]-pre[n]/2-pre[mid-1]);
			node[mid].x=pre[n]/2-pre[mid-1];
			break;
		}
	}
	j=mid;
	for(long long i=mid+1;i<=n+1;i++){
		while(node[j].x==0&&j>=1)j--;
		while(node[j].x<node[i].x){
			if(node[j].c!=node[i].c)res+=node[j].x;
			node[i].x-=node[j].x;
			node[j].x=0;
			j--;
		}
		if(node[i].c!=node[j].c)res+=node[i].x;
		node[j].x-=node[i].x;
		node[i].x=0;
	}
	cout<<res;
	return 0; 
}
