#include<bits/stdc++.h>
using namespace std;
const int x1=200000+10;
int n;
string k;
struct pl{
	long long int a;
	char c;
}a[x1];
int pk(){
	int head=1,tail=n;
	long long int cnt=0;
	while(head<tail){
		if(a[head].c==a[tail].c){
			a[head].a--;
			a[tail].a--;
			if(a[head].a==0) head++;
			if(a[tail].a==0) tail--;
		}
		else{
			a[head].a--;
			a[tail].a--;
			if(a[head].a==0) head++;
			if(a[tail].a==0) tail--;
			cnt++;
		}
	}
	return cnt;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].a>>a[i].c;
	}
	cout<<pk();
	return 0;
}