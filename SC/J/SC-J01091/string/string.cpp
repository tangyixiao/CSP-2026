#include<bits/stdc++.h>
using namespace std;
long long n,x,ans,l,r;
struct node{
	char c;
	long long cnt;
};
node a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].cnt>>a[i].c;
	}
	l=1;
	r=n;
	while(l<r){//cout<<"****"<<endl;
		long long num=min(a[l].cnt,a[r].cnt);
		if(a[l].c!=a[r].c){
			ans+=num;
		}
		a[l].cnt-=num;
		a[r].cnt-=num;
		if(!a[l].cnt)l++;
		if(!a[r].cnt)r--;
	}
	cout<<ans;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

*/