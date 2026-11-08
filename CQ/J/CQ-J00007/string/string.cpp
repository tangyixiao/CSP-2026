#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<pair<int,char>> s;
deque<pair<int,char>> l,r;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		int x;
		char c;
		cin>>x>>c;
		if (s.empty()){
			s.push_back({x,c});
		}else if (c==s.back().second){
			s.back().first+=x;
		}else{
			s.push_back({x,c});
		}
		sum+=x;
	}
	int M=sum/2+1,ss=0,id=0,id2=0;
	for (pair<int,char> i:s){
		ss+=i.first;
		if (ss>=M){
			r.push_back({ss-M,i.second});
			if (sum&1)l.push_back({M-ss+i.first-1,i.second});
			break;
		}
		id++;
	}
	if (sum%2==0){
		ss=0;
		for (pair<int,char> i:s){
			ss+=i.first;
			if (ss>=M-1){
				l.push_back({M-ss+i.first-1,i.second});
				break;
			}
			id2++;
		}
	}
	for (int i=id+1;i<s.size();i++){
		r.push_back(s[i]);
	}
	if (sum&1){
		for (int i=id-1;i>=0;i--){
			l.push_back(s[i]);
		}
	}else{
		for (int i=id2-1;i>=0;i--){
			l.push_back(s[i]);
		}
	}
	
	int ans=0;
	while(!r.empty()||!l.empty()){
		int t1=l.front().first,t2=r.front().first;
		char op1=l.front().second,op2=r.front().second;
		//cout<<t1<<" "<<op1<<" "<<t2<<" "<<op2<<endl;
		l.pop_front();
		r.pop_front();
		if (t1==t2&&t1==0)break;
		if (op1!=op2){
			ans+=min(t1,t2);
		}
		if (t1<t2){
			r.push_front({t2-t1,op2});
		}else if (t1>t2){
			l.push_front({t1-t2,op1});
		}
	}
	cout<<ans;
	
} 
/*
4
1 a
2 b
1 c
1 b


*/
