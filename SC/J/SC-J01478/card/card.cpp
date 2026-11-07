#include<bits/stdc++.h>
using namespace std;
long long a[500005];
queue<long long>que1[300005];
long long ans1[300005];
long long ans2[300005]; 
int main (){
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0)->sync_with_stdio(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		long long op=a[i];
		que1[op].push(i);
	}
	for(int i=1;i<=m;i++){
		if(que1[i].size()!=0){
			que1[i].pop();
		}
//		cout<<que1[i].front();
	}
	priority_queue<long long ,vector<long long> , greater<long long> >que2;
	for(int i=1;i<=n;i++){
		if(que2.size()!=0){
			if(que2.top()==i)que2.pop();
		}
		if(que2.size()==0&&ans2[a[i]]==0){
			ans2[a[i]]=ans1[a[i]]+n-i+1;
		}else{
			if(que2.size()!=0){
				long long op=que2.top();
				ans2[a[i]]+=op-i;
			}
		}
		if(que1[a[i]].size()==0)continue;
		long long oop=que1[a[i]].front();
		que1[a[i]].pop();
		que2.push(oop);
	}
	for(int i=1;i<=m;i++){
		if(ans2[i]!=0){
			cout<<ans2[i]<<' ';
		}else{
			cout<<ans1[i]<<" ";
		}
	}
	return 0;
}