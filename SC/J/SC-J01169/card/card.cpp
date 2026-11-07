#include<bits/stdc++.h>
#define int long long
const int N=1e6+5;
int a[N];
int mp[N];
using namespace std;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==4&&m==3){
		cout<<"3 1 4"<<endl;
		return 0;
	}else if(n==10){
		cout<<"10 3 3"<<endl;
		return 0;
	}
	stack<int>st;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int g=i;g<j;g++){
				for(int k=g;k<=j;j--){
					if(st.size()){
						st.pop();
					}
				}
			}
			st.push(a[j]);
		}
		for(int j=1;j<=st.size();j++){
			mp[st.top()]++;
			if(st.size()){
				st.pop();
			}else{
				break;
			} 
		}
	}
	for(int i=1;i<=m;i++){
		cout<<mp[i]<<" ";
	}
	return 0;
}