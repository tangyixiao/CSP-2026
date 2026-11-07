#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
long long pre[200005],pos[100003];
long long len,temp1=1,temp2=1,ans,cur;//temp1存左半边当前扫描的下标，TEMP2同理 
char s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>s[i];
		len+=a[i];
		pre[i]=pre[i-1]+a[i];
	}
	for(int i=1;i<=n;i++){
		if(pre[i]>=len/2)
		{
			pos[n-i+1]=len-pre[i-1]+1;
			if(pre[i]*2-1>len)
			pre[i]=0;
		}
	}
	while(pre[temp1]!=0&&pos[temp2]!=0){
		if(s[temp1]!=s[n-temp2+1]){
			ans+=min(pre[temp1],pos[temp2])-cur;
		}
		cur=min(pre[temp1],pos[temp2]);
		if(pre[temp1]<=pos[temp2]){
			temp1++;
		}
		else temp2++;
	}
	cout<<ans;
	return 0;
}
