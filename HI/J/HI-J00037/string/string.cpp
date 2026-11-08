#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
int n;long long ans=0; 
struct node{
	int si;char c;
}a[N];
struct node1{
	int p,si;
	//区间编号 剩余长度 
}; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].si>>a[i].c;
	node1 l,r;//双指针 交叉覆盖 
	l={1,a[1].si};
	r={n,a[n].si};
	while(1<=r.p&&l.p<=n){
//		if(l.si==0&&r.si==0){
//			break;//因为是整串扫描没有剩余 两者皆为0绝对可达 
//		}
		if(l.si==r.si){
//			cout<<"size_save: "<< (a[l.p].c==a[r.p].c?0:l.si)<<"\n";
			ans+=(a[l.p].c==a[r.p].c?0:l.si); 
			l.p++,l.si=a[l.p].si;
			r.p--,r.si=a[r.p].si;
		}
		else if(l.si<r.si){
//			cout<<"l_longer: "<< (a[l.p].c==a[r.p].c?0:l.si)<<"\n";
			ans+=(a[l.p].c==a[r.p].c?0:l.si);
			r.si-=l.si; 
			l.p++,l.si=a[l.p].si;
		} 
		else{
//			cout<<"r_longer: "<<(a[l.p].c==a[r.p].c?0:r.si)<<"\n";
			ans+=(a[l.p].c==a[r.p].c?0:r.si);
			l.si-=r.si;
			r.p--,r.si=a[r.p].si; 
		}
	} 
	cout<<ans/2<<"\n";//因为是整串扫描 所以说答案要除以2 
	return 0;
}
 
