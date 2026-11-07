#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ch[500005],sum[500005]/*向后几次*/,ch1[500005],gl[500005]/*被算几次*/,ans[500005];
queue<int > q[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;n>=i;i++){
		scanf("%d",&a[i]);
		q[a[i]].push(i);
	}
	for(int i=1;n>=i;i++){
		ch[i]+=ch[i-1];
		sum[i]=i+ch[i];
		int now=q[a[i]].front();
		q[a[i]].push(now);
		q[a[i]].pop();
		if(now>=q[a[i]].front()) continue;
		ch[i]-=sum[i];
		ch[q[a[i]].front()]+=sum[i];
		//cout<<sum[i]<<" ";
	}
	for(int i=1;n>=i;i++){
		ch1[i]+=ch1[i-1]; 
		int now=q[a[i]].front();
		q[a[i]].push(now);
		q[a[i]].pop();
		if(now>=q[a[i]].front()){
			gl[i]=i+ch1[i];
			//cout<<gl[i]<<" ";
			continue;
		} 
		//if(q[a[i]].size()==0) continue;
		ch1[i]-=sum[i];
		//if(q[a[i]].front()+1<=now) continue;
		//cout<<ch1[i]<<" ";
		ch1[q[a[i]].front()]+=sum[i];
		gl[i]=i+ch1[i];
		//cout<<gl[i]<<" ";
	}
	for(int i=1;n>=i;i++)
		ans[a[i]]+=gl[i];
	for(int i=1;m>=i;i++)
		printf("%d ",ans[i]);	
	return 0;
} 