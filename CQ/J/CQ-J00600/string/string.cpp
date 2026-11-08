#include<cstdio>
#include<iostream>
using namespace std;
const int xn=2e5+5;
int n,a[xn];
char s[xn];
long long sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		cin>>s[i];
	}
	for(int i=1,j=n;i<j;){
		if(a[i]<a[j]){
			if(s[i]!=s[j]) sum+=a[i];
			a[j]-=a[i];
			i++;
		}
		else if(a[i]>a[j]){
			if(s[i]!=s[j]) sum+=a[j];
			a[i]-=a[j];
			j--;
		}
		else{
			if(s[i]!=s[j]) sum+=a[i];
			i++;
			j--;
		}
	}
	printf("%lld",sum);
	return 0;
}
//好无聊啊……
//写一个简单的while吧
/*
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
I AK IOI!
……
*/
//代码：
/*
#include<cstdio>
using namespace std;
int main(){
	freopen("AK.out","w",stdout);
	while(1+1!=3) printf("I AK IOI!\n");
	return 0;
}
*/
//Nseconds就能运行完
