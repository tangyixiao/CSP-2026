#include<bits/stdc++.h>
using namespace std;
#define int long long
string s; 
struct t{
	int a;
	char c;
};
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
//	int n;
//	cin>>n;
//	while(n--){
//		int a;
//		char c;
//		cin>>a>>c;
//		while(a--){
//			s+=c;
//		}
//	}
//	long long sum=0;
//	for(int i=0;i<s.size();i++){
//		if(s[i]!=s[s.size()-i-1]){
//			sum++;
//			s[i]=s[s.size()]-i-1;
//		}
//	}
//	cout<<sum;
	deque<t>q;
	int n;
	cin>>n;
	while(n--){
		int a;
		char c;
		cin>>a>>c;
		q.push_back({a,c});
	}
	int sum=0;
	while(q.size()>1){
		t a=q.front();
		t b=q.back();
		q.pop_back();
		q.pop_front();
		if(a.c==b.c){
			if(a.a>b.a){
				q.push_front({a.a-b.a,a.c});
			}else{
				q.push_back({b.a-a.a,b.c});
			}
		}else{
			if(a.a>b.a){
				sum+=b.a;
				q.push_front({a.a-b.a,a.c});
			}else{
				sum+=a.a;
				q.push_back({b.a-a.a,b.c});
			}
		}
	}
	cout<<sum;
	return 0;
} 
/*
2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

*/
