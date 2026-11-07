#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int ans=0;
	char arr[100005];
	int n,a;
	char c;
	cin>>n;
	int i=1,j=1;
	int ji=0,he=0;
	for(i=1;i<=n;i++){
		cin>>a>>c;
		for(j=1;j<=a;j++){
			arr[he+j]=c;
		} 
	    he=he+a;
	}
	
		int l=1,r=he;
		while(l<r){
			if(arr[l] != arr[r]){
				ans=ans+1;
			}
			l++;
			r--;
		}
		cout<<ans;

	
		
	fclose(stdin);
	fclose(stdout);
	return 0;
}
