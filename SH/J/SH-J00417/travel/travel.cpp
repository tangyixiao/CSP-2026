#include<bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4,a,b;
int ans1,ans2,ans3,ans4;
int t1,t2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;
	if(c1==c3){
		ans1=1;
	}
	else{
		cout<<0<<0<<0<<0<<endl;
		return 0;
	}
	t1=(c2[0]-'0')*10+(c2[1]-'0');
	t2=(c4[0]-'0')*10+(c4[1]-'0');
	if(t1==t2){
		ans2=1;
	}
	else{
		cout<<1000<<endl;
		return 0;
	}

	if(c2[2]=='A'||c2[2]=='B'||c2[2]=='C'){
		if(c4[2]!='D'&&c4[2]!='F'){
			ans3=1;
		}
		else{
			cout<<1100<<endl;
			return 0;
		}
	}
	else if(c2[2]=='D'||c2[2]=='F'){
		if(c4[2]!='A'&&c4[2]!='B'&&c4[2]!='C'){
			ans3=1;
		}
		else{
			cout<<1100<<endl;
			return 0;
		}
	}
	if(c2[2]=='A'){
		if(c4[2]=='B'){
			cout<<1111<<endl;
			return 0;
		}
	}
	else if(c2[2]=='B'){
		if(c4[2]=='A'||c4[2]=='C'){
			cout<<1111<<endl;
			return 0;
		}
	}
	else if(c2[2]=='C'){
		if(c4[2]=='B'){
			cout<<1111<<endl;
			return 0;
		}
	}
	else if(c2[2]=='D'){
		if(c4[2]=='F'){
			cout<<1111<<endl;
			return 0;
		}
	}
	else if(c2[2]=='F'){
		if(c4[2]=='D'){
			cout<<1111<<endl;
			return 0;
		}
	}
	cout<<1110<<endl;
	return 0;
}
