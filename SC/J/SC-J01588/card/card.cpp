#include <bits/stdc++.h>
using namespace std;
int ans[500050]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","r",stdout);
	
	int m,n;
	cin>>n>>m;
	int a[300050];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		vector<int> s;
		bool v[500050];
		int si=0;
		for(int j=i;j<n;j++){
			if(!v[a[j]]){
				v[a[j]]=true;
				s.push_back(a[j]);
				si++;
			}else{
				while(s[si]!=a[j]){
					s.pop_back();
					si--;
				}
			}
		}
		for(int j=0;j<si;j++){
			ans[s[si-j]]++;
//			cout<<s[si]<<'@';
			s.pop_back(); 
		}
//		cout<<endl;
		
	} 
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}