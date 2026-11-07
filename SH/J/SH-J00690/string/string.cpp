//记得把cin,cout改成fin,fout 
#include<iostream>
#include<fstream>
using namespace std;
int a,len,n;
unsigned long long ans;
char c;
string str;
/*
3
2 a
2 b
1 c

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
unsigned long long man(int y){
	ans+=a;
	for(int i=y;i<=n;i++){
		cin>>a>>c;
		ans+=a;
	}
	return ans/2;
}
int main(){
	ifstream fin("string.in");
	ofstream fout("string.out");
	fin>>n;
	for(int i=1;i<=n;i++){
		fin>>a>>c;
		if(a>50){
			fout<<man(i);
			return 0;
		}
		for(int j=1;j<=a;j++){
			str+=c;
		}
		len+=a;
	}
	for(int i=1,j=len;i<j;i++,j--){
		if(str[i]!=str[j]) ans++;
	}
	fout<<ans;
	fin.close();
	fout.close();
	return 0;
}
