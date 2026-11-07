#include<bits/stdc++.h>
using namespace std;
struct node{
	long long num;
//	int n1;
};
bool cmp(node a,node b){
	return a.num>b.num;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	node a[200005];
	for(int i=1;i<=n;i++){
		cin>>a[i].num;
//		a[i].n1=0;
//		int ai=a[i].num,wei=0;
//		while(ai){
//			a[i].n1+=ai%2*pow(2,wei);
//			ai/=2;
//			wei++;
//		}
	}
	sort(a+1,a+1+n,cmp);
	long long s=a[1].num;
	for(int i=2;i<=m;i++){
		s&=a[i].num;
		cout<<a[i].num<<" ";
	}cout<<endl;
	cout<<s;
	return 0;
}