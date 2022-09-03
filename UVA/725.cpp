#include<cstdio>
#include<cstring>
#include<sstream>
using namespace std;
bool t1(int a, int b) {
	stringstream ssa; ssa << a;
	stringstream ssb; ssb << b;
	string s = ssa.str().append(ssb.str());
	if (s.size() < 9) return false;
	else if (s.size() == 9) {
		for (int i = 0; i < s.size(); ++i)
			for (int j = 0; j < s.size(); ++j) {
				if (s[j] == '0')return false;
				else if (i!=j && s[i] == s[j])return false;
			}
	}
	else if (s.size() == 10) {
		for (int i = 0; i < s.size(); ++i)
			for (int j = 0; j < s.size(); ++j)if (i != j&&s[i] == s[j])return false;
	}
	else return false;
	return true;
}
int main() {
	int N;bool fi=false;
	while(scanf("%d",&N)&&N){
	    if(!fi)fi=true;else printf("\n");
		bool flag=true;
		for(int i=01234;i<98766;++i){
			if(i*N<100000)if(t1(i*N,i)){
			if(flag)flag=false;
			printf("%05d %c %05d %c %d\n",i*N,'/',i,'=',N);
		   }	
		} 
		if(flag)printf("There are no solutions for %d.\n",N);
	}
  return 0;
}
