#include<bits/stdc++.h>
using namespace std;
long long n,m,tmp;
struct f{
	long long num,cnt,ch;
}a[200001];
bool cmp(struct f a,struct f b){
	if(a.cnt>b.cnt) return 1;
	else if(a.cnt==b.cnt){
		if(a.ch>b.ch) return 1;
		else return 0;
	}
	return 0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i].num;
		tmp=a[i].num;
		while(tmp!=0){
			a[i].ch++;
			if(tmp%2==1) a[i].cnt++;
			tmp=tmp/2;
		}
		a[i].ch++;
	}
	sort(a+1,a+n+1,cmp);
	long long ans=a[1].num;
	for(int i=2;i<=m;i++){
		ans=ans&a[i].num;
	}
	cout<<ans;
	return 0;
}