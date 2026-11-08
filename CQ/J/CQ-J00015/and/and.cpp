#include<bits/stdc++.h>
using namespace std;

long long n,m;
long long a[200005],b[200005];
//string s[200005];

//string zh(int x){
//	string ret="",cl="";
//	while(x){
//		cl+=char(x%2+'0');
//		x/=2;
//	}
//	if(cl.size()-1!=30){
//		while(cl.size()-1<30){
//			cl+='0';
//		}
//	}
//	for(int zhi=cl.size()-1;zhi>=0;zhi--){
//		ret+=cl[zhi];
//	}
//	return ret;
//}
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int in=1;in<=n;in++){
		cin>>a[in];
//		s[in]=zh(a[in]);
	}
	for(int i=1;i<=n-1;i++){
		long long Max=INT_MIN;
		for(int j=i+1;j<=n;j++){
			long long And=a[i]&a[j];
			if(And>Max){
				Max=And;
			}
		}
		b[i]=Max;
//		cout<<Max<<"\n";
	}
	sort(b+1,b+1+n,cmp);
	sort(a+1,a+1+n,cmp);
	long long ans2=a[1];
	for(int j=2;j<=m;j++){
		ans2=ans2&a[j];
	}
//	for(int test=1;test<=n;test++){
//		cout<<b[test]<<" ";
//	}
//	cout<<"\n";
	long long ans=b[1];
	for(int j=2;j<=m;j++){
		ans=ans&b[j];
	}
	cout<<max(ans,ans2);
	return 0;
} 
