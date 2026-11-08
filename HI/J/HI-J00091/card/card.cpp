#include<bits/stdc++.h>
using namespace std;
deque<int>p;
int a[1000001];
int b[100001];
int o(int x){
	int q=0;
	int k=0;
	int len=p.size();
	int w=1;
	p.push_back(100000000);
	while(p.front()!=100000000){
		if(p.front()==x){
			k=1;
		}
		if(k==1){
			p.pop_front();
		}
		else{
			p.push_back(p.front());
			p.pop_front();
		}
	}
	p.pop_front();
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			o(a[j]);
			p.push_back(a[j]);
		}
		int len=p.size();
		for(int j=1;j<=len;j++){
			b[p.front()]++;
			p.pop_front();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
