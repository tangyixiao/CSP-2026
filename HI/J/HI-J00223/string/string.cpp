#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> my_list;
	vector<string> my_list1;
	FILE *input=freopen("string.in","r",stdin);
	FILE *out=freopen("string.out","w",stdout);
	int n=0;
	cin>>n;
	long long c=0;
	string s;
	string list="";
	int my_time=0;
	int cifang=1;
	int flag=0;
	for(int i=1;i<=n;i++){
		cin>>c>>s;
		if(c>=pow(10,9)){
			c/=100;
			cifang+=2;
		}
		my_list.push_back(c);
		my_list1.push_back(s);
		

	}
	for(int i=0;i<my_list.size();i++){
		if(my_list[i]%10!=0){
			flag=1;
		}
	}
	if(flag==0){
		while(c>=1){
			c/=10;
			cifang+=1;
		}
	} 
	for(int i=0;i<my_list.size();i++){
		for(int j=1;j<=my_list[i];j++){
			list+=my_list1[i];
			
		}
	}
	int l=list.length();
	for(int i=0;i<list.length()/2;i++){
		if(list[i]!=list[l-i-1]){
			
			list[l-i]=list[i];
			my_time+=1;
		}
	}
	cout<<my_time;
	fclose(input);
	fclose(out);
	return 0;
} 
