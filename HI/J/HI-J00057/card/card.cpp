#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin); 
	freopen("card.out","w",stdout);
	int n,m;
	int a[500000]={0};
	cin>>n>>m;
	int b[500000]={0};
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
		for(int i=0;i<n;i++){
		stack<int> s;
		int c[500000]={0};
		int k=0;
		for(int j=i;j<n;j++){
			for(int q=0;q<k;q++){
				if(c[q]==b[q]){
					while(s.size()==q){
						s.pop();
					}
					s.push(b[j]);
					for(int l=q;l<n;l++){
						c[l]=0;
					}
					break;
				}else{
					s.push(b[j]);
				}
			}
		}	
		while(!s.empty()){
			a[s.top()]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
