#include<bits/stdc++.h>
using namespace std;
const int R=1e5*5+5;
const int Rm=1e5*3+5;
int n,m,arr[R],cnt[Rm],_max,_min=Rm;
bool number[Rm],flag[Rm];
stack<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	for (int i=1;i<=n;++i){
		scanf("	%d",&arr[i]);
		number[arr[i]]=true;
		_max=max(_max,arr[i]);
		_min=min(_min,arr[i]);
	}
	for (int i=1;i<=n;++i){
		for (int j=_min;j<=_max;++j)
			flag[j]=false;
		for (int j=i;j<=n;++j){
			if (flag[arr[j]]==true){
				while (q.top()!=arr[j]){
					flag[q.top()]=false;
					q.pop();
				}	
				q.pop();
			}
			q.push(arr[j]);
			flag[arr[j]]=true;
		}
		while (!q.empty()){
//			cout<<q.top()<<' ';
			q.pop();
		}
		for (int j=_min;j<=_max;++j){
			if (flag[j])
				cnt[j]++;
		}
	}
	for (int j=_min;j<=_max;++j){
		if (number[j]==true)
			printf("%d ",cnt[j]);
	}
	return 0;
}

