#include<bits/stdc++.h>
using namespace std;
int n,b;
long long cnt=0;
string s=" ";
struct info{
	int num;
	char ch;
}a[20003];
int chu(int a,int b){
	if(b==0)return a;
		return chu(b,a%b);
}
int test(){
	int l=a[1].num;
	for(int i=2;i<=n;i++)l=chu(l,a[i].num);
	return l;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i].num>>a[i].ch;
	b=test();
	for(int i=1;i<=n;i++){
		for(int j=1;j<=(a[i].num/=b);j++){
			s+=a[i].ch;
		}
	}
	int lo=s.length()-1;
	for(int i=1;i<=lo/2;i++)if(s[i]!=s[lo+1-i])cnt++;
	cnt*=b;
	cout<<cnt;
	return 0;
} 