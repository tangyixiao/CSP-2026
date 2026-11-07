#include<bits/stdc++.h>
using namespace std;
struct o{
	long long a;
	char c;
};
o s[2000005];
o s1[2000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a1;
		char c1;
		cin>>a1>>c1;
		s[i]={a1,c1};
	}
	int j=1;
	s1[j]=s[1];
	for(int i=1;i<n;i++){
		if(s1[j].c==s[i+1].c){
			s1[j].a+=s[i+1].a;
		}
		else{
			j++;
			s1[j]=s[i+1];
		}
	}
	int i=1;
	long long num=0;
	while(i<j){
		if(s1[i].c!=s1[j].c){
			num+=min(s1[i].a,s1[j].a);
			//cout<<num<<"\n";
			if(s1[i].a==s1[j].a){
				i++;
				j--;
				continue;
			}
			if(min(s1[i].a,s1[j].a)==s1[i].a){
				s1[j].a-=s1[i].a;
				i++;
			}
			else{
				s1[i].a-=s1[j].a;
				j--;
			}
		}
		//aaa ccc a
		else{
			if((max(s1[i].a,s1[j].a)-min(s1[i].a,s1[j].a))==0){
				i++;
				j--;
				continue;
			}
			//cout<<num<<"\n";
			if(min(s1[i].a,s1[j].a)==s1[i].a){
				s1[j].a-=s1[i].a;
				i++;
			}
			else{
				s1[i].a-=s1[j].a;
				j--;
			}
		}
	}
	cout<<num;
	return 0;
}
