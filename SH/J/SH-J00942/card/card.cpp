#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],num[300005]={0};
vector<int> b;
void f(int now){
	if (now>=n){
		for (int i=0;i<(int)b.size();i++){
			int x=b[i];
			if (x<=m){
				num[x]=num[x]+1;
			}
		}
		while (!b.empty()){
			b.pop_back();
		}
		return;
	}
	now++;
	for (int i=0;i<(int)b.size();i++){
		if (a[now]==b[i]){
			while (b.back()!=a[now]){
				b.pop_back();
			}
			b.pop_back();
		}
	}
	b.push_back(a[now]);
	f(now);
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=m;i++){
		for (int i=1;i<=n;i++){
			f(i-1);
		}
		cout<<num[m]<<" ";
		memset(num,0,sizeof(num));
	}
	return 0;
}
