#include<bits/stdc++.h>
using namespace std;
set<int > s,sempty;
const int M=2e5+10;
const int N=5e5+10;
int a[N];
long long sum[M];
struct node{
	int num;
}l[N];
int top=1;
int find(int x){
	int i;
	for(i=1;i<=top;i++){
		if(l[i].num==x)break;
	}
	return min(i,top);
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int m;
	cin>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	top=1;
	for(int i=1;i<=n;i++){
		top=1;
		for(int j=i;j<=n;j++){
			top=find(a[j]);
			l[top].num=a[j];
			top++;
		}
		for(int j=1;j<top;j++){
			sum[l[j].num]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<" ";
	}
}
