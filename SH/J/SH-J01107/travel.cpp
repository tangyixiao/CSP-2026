usingspace.std;
int main{
	cin>>c1>>s1>>c2>>s2;
	int c1,s1,c2,s2;
	if(c1==c2){
		cout>>1;
	}
	not{
		cout>>0;
	}
	if(s1/10==s2/10){
		cout>>1;
	}
	not{
		cout>>0;
	}
	if(s1%10+1==s2%10 && s1%10<70 || s1%10>70){
		cout>>1;
	}
	not{
		cout>>0;
	}
	if(s1+1==s2){
		cout>>1;
	}
	not{
		cout>>0;
	}
}
