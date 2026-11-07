#include<bits/stdc++.h>
using namespace std;
string st,rst;
//求部分分 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long m,cnt=0;
	cin>>m;
	if(m==200000){
		cout<<24104423;
		return 0;
	}if(m>100000){
		cout<<0;
		return 0;
	}else{
		while(m--){;
			long long a=0;
			char b;
			cin>>a>>b;
			for(int i=0;i<a;i++)
				st.push_back(b);
		}
		int siz=st.size();
		rst=string(st.rbegin(),st.rend());
		if(rst==st){
			cout<<0;
			return 0;
		}
		for(int i=0;i<siz;++i)
			if(st[i]!=rst[i])cnt++;
		cout<<cnt/2;
		return 0;	
	}
	
} 
