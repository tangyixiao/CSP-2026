#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	string s;
	long long allline,allchange=0;
	cin>>allline;
	for(long long i=0;i<allline;i++){
		long long linelong;
		string abc,abc10,abc100;
		cin>>linelong>>abc;
		abc10=abc+abc+abc+abc+abc+abc+abc+abc+abc+abc;
		abc100=abc10+abc10+abc10+abc10+abc10+abc10+abc10+abc10+abc10+abc10;
		for(long long i=0;i<linelong/100;i+=1){
		s+=abc100;
	}for(long long i=0;i<linelong%100/10;i+=1){
		s+=abc10;
	}for(long long i=0;i<linelong%10;i+=1){
		s+=abc;
	}}
	long long ss=s.size();
	for(long long i=0;i<ss;i++){
		if(s[i]!=s[ss-1])allchange++;
		ss--;
	}
	cout<<allchange;
	return 0;
}