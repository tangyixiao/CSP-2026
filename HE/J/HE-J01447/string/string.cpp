#include<bits/stdc++.h>

using namespace std;

int main(){
	//注释！！！！！！！！！！！！！！！！！！！！！！！ 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	string s;
	int n;
	long long len=0;//字符串长度
	long long ans=0;//要修改的字符数量 
	
	cin>>n;
	for(int i=0;i<n;i++){
		int tmp;
		string c;
		cin>>tmp>>c;
		len+=tmp;
		while(tmp--) s+=c;
	}
	
	if(len%2==1){
		long long mid=(len>>1);
		
		for(int i=1;i<=mid;i++){//这个时候,左右两部分各有mid个字符
			if(s[mid+i]!=s[mid-i]) ans++;
		}
		
		cout<<ans;
		return 0;
	}
	
	else{
		long long mid_l=(len>>1)-1;
		long long mid_r=mid_l+1; 
		
		for(int i=0;i<=mid_l;i++){//这个时候,左右两部分各有mid_l个字符
			if(s[mid_l-i]!=s[mid_r+i]) ans++;
		}
		
		cout<<ans;
		return 0;
	}
	
	
} 
