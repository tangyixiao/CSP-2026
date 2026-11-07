#include<bits/stdc++.h>
using namespace std;
int a[5000005],b[300005];
int main(){
	freopen("card.in","r","stdin");
	freopen("card.out","w","stdout");
	stack<int> st,sy;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int k=i;k<=n;k++){
		bool fl=1;
			for(int j=1;j<=st.size();j++){
				if(st.top()==a[k]){
					fl=0;
					break;
				}
				sy.push(st.top());
				st.pop();
			}
			
			if(fl){
				st.push(a[k]);	
				while(sy.size()){
					st.push(sy.top());
					sy.pop();
				}
			}
		}
		while(st.size()){
			b[st.top()]++;
			st.pop();
		}
		while(sy.size()){
			sy.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	
	return 0;
}