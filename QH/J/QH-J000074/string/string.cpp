#include<bits/stdc++.h>
using namespace std;
//预计得分66 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//思路实现过难 1h没有完成，开始打暴力保证得分
	int n;
	cin>>n;
	string s=" ";
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		char c;
		cin>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	} 
	int len=(s.size())/2;
	long long ans=0;
	//cout<<s<<' ';
	for(int i=1;i<=len;i++){
		if(s[i]!=s[s.size()-i]){
			ans++;
			//cout<<s[i]<<' '<<s[s.size()-i];
		}
	}
	cout<<ans;
	return 0;
} 
/*
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+7;
struct node{
	long long num;
	char c;
	long long id=0;
};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	vector<node> a(n+1);
	long long all=0;
	for(int i=1;i<=n;i++){
		long long num;
		char c;
		cin>>num>>c;
		all+=num;
		a.push_back({num,c,a[i-1].id+num});
	}
	deque<node> fr,ba;
	for(int i=1;i<=n;i++){
		if(all%2){
			if(a[i].id>=all/2+1&&a[i-1].id<all/2+1){
				if(a[i].num<=1) continue; 
				fr.push_back({a[i].num-(a[i].id-all/2-1)-1,c,all/2});
				if(a[i].num<3) continue;
				ba.push_back({(a[i].id-all/2-1),c,a[i].id});
			}
		}else{
			if(a[i].id>=all/2&&a[i-1].id<all/2){
				if(a[i].num<=1) continue; 
				fr.push_back({a[i].num-(a[i].id-all/2-1)-1,c,all/2});
				if(a[i].num<3) continue;
				ba.push_back({(a[i].id-all/2-1),c,a[i].id});
			}
		}
	}
	return 0;
} */ 
