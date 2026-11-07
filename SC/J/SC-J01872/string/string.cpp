#include <bits/stdc++.h>
using namespace std;
int a[20005];
string c[20005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cmt;
	long long cnt;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		cnt+=a[1];
		s+=c[i];
}
int f=0;
int t=0;
for(int i=1;i<=n;i++){
	if(a[1]==a[i-1])	f=1;
	else	f=0;
}
if(f==1){
	cout<<"0";
	t=1;
}

		if(cnt%2==1){
			for(int i=0;i<(cnt-1)/2;i++){
				if(s[i]!=s[cmt-i-1])	cmt++;	
			}
		}
		else{
			if(s[cnt/2]==s[cnt/2]-1){
			
			for(int i=0;i<cnt/2-1;i++){
				if(s[i]!=s[cnt-i-1])	cmt++;
			}
		}
			else{
			
			for(int i=0;i<cnt/2-1;i++){
				if(s[i]!=s[cnt-i-1])	cmt++;
		    }
		    cmt+=1;
		}
					
	}			
if(t!=1)
cout<<cmt;
	return 0;
}