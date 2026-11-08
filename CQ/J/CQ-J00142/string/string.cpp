#include<bits/stdc++.h>
using namespace std;
long long n,m=0,ans=0;
struct ll{
	long long num;
	char word;
	bool flag;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].word;
		a[i].flag=true;
	}
	for(int i=1;i<=n/2+1;i++){
		int w=1;
		while(1){
			if(a[n-i+w].flag) break;
			--w;
		}
		if(a[i].word!=a[n-i+w].word){
			if(a[i].num>a[n-i+w].num){
				ans+=a[n-i+w].num;
				a[i].num-=a[n-i+w].num;
				a[n-i+w].flag=false;
			}else if(a[i].num<a[n-i+w].num){
				ans+=a[i].num;
				a[n-i+w].num-=a[i].num;
				a[i].flag=false;
			}else{
				ans+=a[i].num;
				a[i].flag=false;
				a[n-i+w].flag=false;
			} 
		}else{
			if(a[i].num>a[n-i+w].num){
				a[i].num-=a[n-i+w].num;
			}else if(a[n-i+w].num>a[i].num){
				a[n-i+w].num-=a[i].num;
			}else{
				a[n-i+w].flag==false;a[i].flag==false;
			}
		}
	}
	cout<<ans;
	return 0;
}
/*
3
2 a
2 b
1 c
*/
