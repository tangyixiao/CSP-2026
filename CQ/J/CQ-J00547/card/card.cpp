#include <bits/stdc++.h>
using namespace std;

int n,m,a[500005],t[300005],ans[500005];
stack<int> s; 

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1 ; i<=n ; i++){
		cin>>a[i];
	}
	
	for(int l=1 ; l<=n ;l++){//
	
	for(int i=l ; i<=n  ;i++){
		if(t[a[i]]==1){
			while(s.top()!=a[i]){
				t[s.top()]--;
				s.pop();
			}
			if(s.top()==a[i]){
//				cout<<"x\n";
			}else{
				s.push(a[i]);
				t[a[i]]++;
			}
			
		}else{
			t[a[i]]++;
			s.push(a[i]);
		}
	}
	for(int i=0 ; i<=s.size() ; i++){
		ans[s.top()]++;
//		cout<<s.top();
		s.pop();
	}
//	cout<<"\n";
	
	for(int i=0 ; i<=m ; i++){
		t[i]=0;
	}
	
	}//3 1 2 1 3 2 3 1 2 1
	
	for(int i=1 ; i<=m ; i++){
		if(ans[i]>n)ans[i]=min((ans[i]+1)/2,n);
		cout<<ans[i]<<" ";
	}
	
	return 0;
} 
