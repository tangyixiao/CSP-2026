#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a[19][5],b[19][5];
	int c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int ans=0;
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0";
	}
	int n,m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			a[i][j]!=b[i][j];
			if(a[i][j]==b[i][j-1]&&a[i][j]==b[i][j+1]){
				cout<<"1"; 
			}else{
				cout<<"0";
			}
		}
		for(int i=0;i<=n;i++){
	    if(a[i]==b[i]){
	    	cout<<"1";
	    
		}else{
			cout<<"0";
		}	
		ans++;
	}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
}
