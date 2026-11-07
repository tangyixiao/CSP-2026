#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

//	int n,ans=0;
//	scanf("%d",&n);	
//	vector<int>v(n);
//	vector<char>v1(n);
//	int sum=0;
//	for(int i=0;i<n;i++){
//		scanf("%d %c",&v[i],&v1[i]);
//		sum+=v[i];
//	}
//	int a=0,tmp=0;
//	for(;a<n;a++){
//		tmp+=v[a];
//		if(tmp>sum/2){
//			tmp-=v[a];
//			break;
//		}
//	}
//	if(sum%2==1){
//		v[a]--;
//	}
//	if(tmp!=sum/2){
//		v.insert(v.begin()+a-1,sum/2-tmp);
//		v1.insert(v1.begin()+a-1,v1[a]);
//		v[a]-=v[a-1];
//	}
//	string s,s1;
//	for(int i=0;i<a;i++){
//		if(v[i]!=1&&v[i+a]==1){
//			if()
//		}
//	}
	
	int n;
//	int sum;
	scanf("%d",&n);	
	for(int i=0;i<n;i++){
		long long temp;
		char c;
		scanf("%lld %c",&temp,&c);
//		sum+=temp;
//		cout<<s.size()<<endl;
		string s1;
		for(int i=0;i<temp;i++){
			s+=c;
		}
	}
	int ans=0;
//	cout<<s.size()<<endl;
	string s1(s.begin(),s.begin()+(s.size())/2),s2(s.begin()+(s.size()-1)/2+1,s.end());
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i]){
			ans++;
		}
	}
//	cout<<s1.size()<<' '<<s2.size()<<endl;
	printf("%d",ans);
	return 0;
}
/*
4
1 a
4 b
1 c
1 d
abbbbcd
1 a
2 b
1 b
1 c
1 d
abbbcd
*/