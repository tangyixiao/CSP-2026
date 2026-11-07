#include<bits/stdc++.h>
using namespace std;
long long n;
long long cnt=0;

deque<char>q;




int main(){
	ios::sync_with_stdio(false);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long a;
	char b;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			q.push_front(b);
			
		}
	}
	
	long long num=0;
	while(!q.empty()){
		if(q.front()!=q.back()){
			num++;
		}
		q.pop_front();
		if(!q.empty()){
			q.pop_back();
		}
	}
	cout<<num;
	return 0;
	
	

}