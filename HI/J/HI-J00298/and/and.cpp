#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b;
	cin>>a>>b;
	int s[200004];
	int max=-11211;
	for(int i=1;i<=a;i++){
		cin>>s[i];
	}
	sort(s+1,s+a+1);
	int bb=0;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			if(s[i]==s[j]){
				cout<<"#";
			}
			else{
			cout<<1;
			return 0;	
			}
		}
		
			if(s[i]>max){
				max=s[i];
			}
		}
	

	
	cout<<bb<<endl;
	cout<<max;
	return 0;
	}
	
