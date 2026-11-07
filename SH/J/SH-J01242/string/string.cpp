#include<iostream>
#include<vector>
using namespace std;
struct str{
	int len;
	char c;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum=0;
	cin>>n;
	vector<str> v;
	for(int i=1;i<=n;i++){
		str s;
		cin>>s.len>>s.c;
		v.push_back(s);
	}
	int i=0,j=n-1;
	while(i<j){
		int m=min(v[i].len,v[j].len);
		if(v[i].c!=v[j].c){
			sum+=m;
		}v[i].len-=m;
		v[j].len-=m;
		if(v[i].len==0){
			i++;
		}if(v[j].len==0){
			j--;
		}
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
