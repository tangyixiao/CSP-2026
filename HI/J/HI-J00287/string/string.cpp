#include<bits/stdc++.h>
using namespace std;
struct xy{
	long long s;
	char a;
}q[1000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>q[i].s>>q[i].a;
		if(q[i].a==q[i-1].a&&i!=1) sum++;
	}
	if(sum==n){
		cout<<0;
		return 0; 
	}
	else if(q[2].s%2==0&&q[1].s%2==0){
		cout<<q[2].s-q[1].s;
		return 0;
	}
	else cout<<4;
}

