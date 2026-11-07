#include<bits/stdc++.h>
using namespace std;
int a[510000],mm[320000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	int b[m]={0};
	stack<int>st;
	int kk=1;
	while(kk<=n){
		for(int i=kk; i<=n; i++){
			if(st.empty()||!b[a[i]]){
				b[a[i]]++;
				st.push(a[i]);
			}else if(b[a[i]]){
				while(st.top()!=a[i]){
//					cout<<st.top()<<' ';
					b[st.top()]--;
					st.pop();
				}
			}
		}
		while(!st.empty()){
			mm[st.top()]++;
			b[st.top()]--;
			st.pop();
		}
		kk++;
	}
	for(int i=1; i<=m; i++){
		cout<<mm[i]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
