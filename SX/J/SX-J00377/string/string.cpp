#include <bits/stdc++.h>
#define lonit long long
using namespace std;
const lonit MAXN=2e5+5;
struct node{
	int num;
	char id;
}a[MAXN];
int n;
lonit ans;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i].num>>a[i].id;
	int rtot=n,ltot=1;
	while(rtot>ltot){
		if(a[rtot].id==a[ltot].id){
			if(a[rtot].num>a[ltot].num)
				a[rtot].num-=a[ltot].num,ltot++;
			else if(a[rtot].num<a[ltot].num)
				a[ltot].num-=a[rtot].num,rtot--;
			else rtot--,ltot++;
		}
		else{
			if(a[rtot].num>a[ltot].num){
				a[rtot].num-=a[ltot].num,ans+=a[ltot].num,ltot++;
			}
			else if(a[rtot].num<a[ltot].num)
				a[ltot].num-=a[rtot].num,ans+=a[rtot].num,rtot--;
			else ans+=a[rtot].num,rtot--,ltot++;
		}
	}
	cout<<ans;
	return 0;
}