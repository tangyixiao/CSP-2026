#include<bits/stdc++.h>
using namespace std;
stack<int> st;
vector<int> a;
int cnt[100005];
int check(stack<int> st,int num){
	vector<int> stac;
	stack<int> sta;
	sta=st;
	for(int i=0;i<st.size();i++){
		stac.push_back(sta.top());
		sta.pop();
	}
	for(int i=0;i<st.size();i++){
		if(stac[i]==num){
			return i; 
		}
	}
	return 1;
}


int main(){
	ios::sync_with_stdio(0);
//	cin(0);
//	cout(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int x=a[j];
			if(check(st,x)!=1){
				for(int p=check(st,x);p<st.size();p++){
					st.pop();
				}
			}
			st.push(a[j]);	
		}
		for(int j=0;j<st.size();j++){
			int x=st.top();
			cnt[x]++;
			st.pop();
		}
	}
	for(int i=0;i<m;i++){
	cout<<cnt[i]<<' ';
	}
	return 0;
}