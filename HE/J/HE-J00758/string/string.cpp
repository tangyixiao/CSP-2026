#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	string s;
	while(n--){
		int a;
		string b;
		char c;
		cin >> a;
		getchar();
		cin >> b;
		for(int i=1;i<=a;i++){
			s+=b;
		}
	}
	int l=s.size();
	int ans=0;
	for(int i=0;i<=l/2;i++){
		bool boo=true;
		for(int j=0;j<=l/2;j++){
			if(s[j]!=s[l-1-j]){
				boo=false;
				break;
			}
		}
		if(boo){
			cout << ans;
			break;
		}
		if(s[i]!=s[l-1-i]){
			s[i]=s[l-1-i];
			ans+=1;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

