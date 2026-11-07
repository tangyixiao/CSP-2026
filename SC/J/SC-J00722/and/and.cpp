#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
struct node{
	int val,cnt;
};
int n,m;
node a[N];
int b[N];
int ans,ans1;
int find(int x){
	int res=0;
	while(x){
		if((x&1)==1)res++;
		x>>=1;
	}
	return res;
}
bool cmp(node i,node j){
	if(i.cnt!=j.cnt)return i.cnt>j.cnt;
	else return i.val>=j.val;
}
bool cmp1(int i,int j){
	return i<j;
}
int main(){
	freopen("r","and.in",stdin);
	freopen("w","and.out",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].val;
		a[i].cnt=find(a[i].val);
	}
	int cnt=0;
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=m;i++){
		if(i==1)ans=a[i].val;
		else ans&=a[i].val;
	}
	for(int i=1;i<=n;i++){
		b[i]=a[i].val;
		cnt++;
	}
	sort(b+1,b+1+n,cmp1);
    for(int i=0;i<m;i++){
		if(i==0)ans1=b[n-i];
		else ans1&=b[n-i];
	}
	cout<<max(ans,ans1);
	return 0;
}