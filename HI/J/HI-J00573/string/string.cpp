#include<bits/stdc++.h>
using namespace std;
using i32=int;
#define int long long
i32 main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	vector<string> v(n);
	vector<int> cnt(n);
	for(int i=0;i<n;i++){
		int a;
		char c;
		cin>>a>>c;
		cnt[i]=a;
		string s="";
		for(int j=0;j<a;j++)
			s+=c;
		v[i]=s;
	}
	int sum=0;
	string s="";
//	for(int i=0,j=v.size()-1;i<n;i++,j--){
//		string z=v[i];
//		int q=0;
//		if(cnt[i]>cnt[j])
//			q=cnt[i]-cnt[j];
//		else if(cnt)
//	}
	for(int i=0;i<n;i++)
		s+=v[i];
	int q=0;
	if(s.size()%2==0)
		q=s.size()/2;
	else
		q=(s.size()-1)/2;
	string sa=s;
	reverse(sa.begin(),sa.end());
	for(int i=0;i<q;i++){
		if(s[i]==sa[i])
			continue;
		else
			sum++;
	}
	cout<<sum<<endl;
	return 0;
} 
