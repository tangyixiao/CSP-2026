#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a[N];
char ch[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)	cin>>a[i]>>ch[i];
	
	long long ans=0;
	int i=1,j=n+1;//块下标
	long long lst=0;//右侧剩余部分
	for(;i<j;i++){
		long long cnt=0;//右侧偏移量
		if(lst){//右侧的上一个块有与当前左侧块匹配部分 
			if(lst>=a[i]){
				lst-=a[i];
				ans+=a[i]*(ch[j]!=ch[i]);
				continue;
			}else cnt+=lst,ans+=lst*(ch[j]!=ch[i]),lst=0;
		} 
		while(cnt<a[i]){
			j--;
			if(i==j)	break;
			if(a[j]+cnt>=a[i]){
				lst=a[j]+cnt-a[i];
				ans+=(a[i]-cnt)*(ch[i]!=ch[j]); 
				break;
			}
			cnt+=a[j];
			ans+=a[j]*(ch[i]!=ch[j]); 
		}
	} 
	cout<<ans;
	return 0;
}