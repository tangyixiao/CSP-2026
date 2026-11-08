#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//提交时记得删掉注释哦！！！ freopen别漏 文件名看看写没写对！！！
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	map<long long,char> mp;
	int n;
	long long x;
	char c;
	cin>>n;
	long long cnt=1;
	for(int i=1;i<=n;i++){
		cin>>x>>c;
		for(int j=1;j<=x;j++){
			mp[cnt++]=c;
		}
	}
	cnt--;
	long long lmy=0;
	for(long long i=1;i<=cnt/2;i++){
		if(mp[i]!=mp[cnt-i+1]) lmy++;
	}
	cout<<lmy;
	return 0;
}

