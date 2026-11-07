#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n,m;
int s[200005],mp[5005],ans[5005];
stack<int>st;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	for(int k=1;k<=n;k++){
		//cout<<"p"; 
		for(int i=1;i<=n;i++){
			mp[i]=0;
		}
		for(int i=k;i<=n;i++){
//			stack<int>op;
//			while(!st.empty()){
//				op.push(st.top());
//				cout<<st.top()<<' ';
//				st.pop();
//			}
//			while(!op.empty()){
//				st.push(op.top());
//			
//				op.pop();
//			}
//			cout<<endl;
			if(mp[s[i]]!=0){
				while(1){
					//cout<<1;
				//	cout<<st.top()<<" "<<s[i]<<endl;
				if(st.top()==s[i])break;
					mp[st.top()]=0;
					st.pop();
					
				}
				mp[s[i]]=0; 
				
			}
			st.push(s[i]);
			mp[s[i]]++;
		}
		
		while(!st.empty()){
			ans[st.top()]++;
			st.pop();
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
	
