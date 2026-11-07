#include<bits/stdc++.h>
using namespace std;
int n,m;
long long sum;
struct A{
	long long x;
	int bs[31];
}s[200005];
bool cmp(A xa,A ya){
	return xa.x>ya.x;
}
int cnt[31];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		s[i].x=a;
		for(int j=0;j<=30;j++){//处理30位2进制 
			s[i].bs[j]=a%2;
			a/=2;
		}
	}
	for(int i=0;i<=30;i++){
		for(int j=1;j<=n;j++){
			cnt[i]+=s[j].bs[i];
		}
	} 
	for(int i=30;i>=0;i--){
		if(cnt[i]<m){
			for(int j=1;j<=n;j++){
				if(s[j].bs[i]!=0){
					s[j].x-=pow(2,i);
				}
				s[j].bs[i]=0;
			}
		}
	}
	sort(s+1,s+n+1,cmp);
	sum=s[1].x;
	for(int i=2;i<=m;i++){
		sum&=s[i].x;
	}
	cout<<sum;
}
/*
5 2
8 4 2 1 3

4 2
3 15 12 12

5 3
31 3 1 15 7

*/
