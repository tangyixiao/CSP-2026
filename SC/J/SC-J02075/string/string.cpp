#include<bits/stdc++.h>
using namespace std;
const int N=2e5+1;
long long n,sum1,cnt,ans,t1=1,t2;
struct st{
	long long num1;
	char letter;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	t2=n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num1>>a[i].letter;
		sum1+=a[i].num1;
	}
	while(cnt<sum1/2){
		long long x=min(a[t1].num1,a[t2].num1);
		if(a[t1].letter==a[t2].letter){
			if(cnt+x>sum1/2)cnt=sum1/2+1;
			else cnt+=x;
			a[t1].num1-=x;
			if(!a[t1].num1)t1++;
			a[t2].num1-=x;
			if(!a[t2].num1)t2--;
			continue;
		}
		if(cnt+x>sum1/2){
			ans+=(sum1/2-cnt);
			cnt=sum1/2+1;
		}
		else{
			cnt+=x;
			ans+=x;
		}
		a[t1].num1-=x;
		if(!a[t1].num1)t1++;
		a[t2].num1-=x;
		if(!a[t2].num1)t2--;
	}
	cout<<ans;
	return 0;
}