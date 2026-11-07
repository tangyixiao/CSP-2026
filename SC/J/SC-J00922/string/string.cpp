#include<bits/stdc++.h>
using namespace std;
long long a[200010];
long long len;
int n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		char x;
        scanf("%d",&a[i]);
		cin>>x;
		for(int j=1;j<=a[i];j++){
			s+=x;
		}
	}
	int len=(s.size()-1)/2;
	long long cnt;
	if(s.size()%2==0){
		for(int i=0;i<=len;i++){
			if(s[i]==s[s.size()-i]){
				cnt++;
			}
		}
	}else{
		for(int i=0;i<=len-1;i++){
			if(s[i]==s[s.size()-i-1]){
				cnt++;
			}
		}
	}
	if(cnt<(len-cnt)){
		if(cnt<0){
			cout<<0;
			return 0;
		}
		cout<<cnt;
		return 0;
	}else{
		if(len-cnt<0){
			cout<<0;
			return 0;
		}
		cout<<len-cnt;
		return 0;
	}
	
}