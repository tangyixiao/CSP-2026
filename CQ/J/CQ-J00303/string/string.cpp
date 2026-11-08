#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
	long long num;
	char c;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].num>>a[i].c;
	int i=1,j=n;
	long long ans=0;
	while(i<j){
		if(a[i].c!=a[j].c){
			if(a[i].num<a[j].num){
				ans+=a[i].num;
				a[j].num-=a[i].num;
				a[i].c=a[j].c;
				i++;
			}else if(a[i].num>a[j].num){
				ans+=a[j].num;
				a[i].num-=a[j].num;
				a[j].c=a[i].c;
				j--;
			}else{
				ans+=a[j].num;
				a[j].c=a[i].c;
				i++,j--;
			}
		}else{
			if(a[i].num==a[j].num) i++,j--;
			else if(a[i].num>a[j].num){
				a[i].num-=a[j].num;
				j--;
			}else{
				a[j].num-=a[i].num;
				i++;
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
/*
2
2 a
3 a
*/
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
