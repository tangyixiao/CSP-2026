#include<bits/stdc++.h> 
using namespace std;
string s=" ";//转化而来的字符串 
long long n,shu[200005],sum=0;//shu表示每个组的长度 
long long cnt=0;//要换的字符个数 
char zf[200005];//zf表示每个组之中的字符 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>shu[i]>>zf[i];
		sum+=shu[i];//一共有多少字符 
	}
	if(sum<=pow(10,7)){//数据较小，采用一个一个的模拟 
		for(int i=1;i<=sum;i++){
			for(int j=1;j<=shu[i];j++){
				s+=zf[i];
			}
		}
		//cout<<s<<endl;//检查s 
		for(int i=1;i<=sum;i++){
			if(s[i]!=s[sum+1-i]){
				cnt++;
				s[sum+1-i]=s[i];
			}
		}
		cout<<cnt;
		return 0;
	}
	for(long long i=1;i<=n;i++){
		if((zf[i] != zf[n+1-i])  &&  (shu[i] == shu[n+1-i])){
			cnt+=shu[i];
			zf[n+1-i]=zf[i];
		}
	}
	cout<<cnt;
	return 0;
}
