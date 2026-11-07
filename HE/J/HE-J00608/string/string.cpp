#include <bits/stdc++.h>
using namespace std;
int a[200005];
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt1=0,cnt2=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		if(b[i]==b[i-1]){
			cnt1++;
		}
	}
	if(cnt1=n-1){
		cout<<0;
	}else{
		string s1;
		string s2;
		for(int i=0;i<n;i++){
			s1[i]=b[i];
			s2[i]=b[n-i];
		}
		while(s1!=s2){
			for(int i=0;i<n;i++){
				if(s1[i]!=s2[i]){
					s2[i]=s1[i];
					cnt2++;
				}	
			}
		}
		cout<<cnt2;
	}	
	
	return 0;
	fclose(stdin);
	fclose(stdout);
}
