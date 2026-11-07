#include<iostream>
#include<algorithm>
using namespace std;
struct node{
	int id,a;
}a[200005];
bool cmp(node x,node y){
	return x.a>y.a;
}
bool cp(node x,node y){
	return x.id<y.id;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i].a;
		a[i].id=i;
	}
	sort(a,a+n,cmp);
	sort(a,a+m,cp);
	int sum=a[0].a;
	for(int i=0;i<m;i++)sum&=a[i].a;
	cout<<sum;
	return 0;
}
