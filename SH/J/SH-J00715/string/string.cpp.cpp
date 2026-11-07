#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5; 
struct{
	int num;
	char c;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0;
	string s="";
	cin>>n;
	long long l=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
		l+=a[i].num;
	} 
	long long cha=0;
	for(int i=1;i<=n/2;i++){
		if(a[i].c!=a[l-1].c && a[l-i].num<a[i].num){
			cha=a[i].num-a[l-1].num;
			a[l-i-1].num-=cha;
			ans+=cha*2;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
