#include <bits/stdc++.h>
using namespace std;
string bin(int x){
	string ans;
	while(x!=0){
		int d1=x%2;
		string q="0";
		q=q[0]+d1;
		ans.append(q);
		x/=2;
	}
	return ans;
}
int dec(string s){
	int an=0;
	for(int i=0;i<s.length();i++){
		an+=(s[i]-'0')*pow(2,i);
	}
	return an;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,l[200005];
	int ans;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>l[i];
	}
	if(m!=1){
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				string s1,s2,s3;
				s1=bin(l[i]);s2=bin(l[j]);
				int t=min(s1.length(),s2.length());
				for(int k=0;k<t;k++){
					if((s1[k]-'0') and (s2[k]-'0'))
						s3.append("1");
					else
						s3.append("0");
				}
				//cout<<s3<<endl;
				ans=max(ans,dec(s3));
			}
		}
	}else{
		for(int i=1;i<=n;i++){
			ans=max(ans,l[i]);
		}
	}
	cout<<ans;
	return 0;
}