#include <iostream>
#include "testlib.h"
using namespace std;
typedef pair<int,int> pii;
const int MAX = 1e9;
const int MAXN = 2e5+10;
pii interval[MAXN];
void print(int n,int k)
{
	cout << n <<" "<< k <<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<interval[i].first<<" "<<interval[i].second<<endl;
	}
}
int main(int argc, char *argv[])
{
	registerGen(argc, argv);
	string type(argv[1]);
	if (type == "random")
	{
		int n = atoi(argv[2]);
		int k = rnd.next(1,n);
		for(int i=0;i<n;i++){
			int s = rnd.next(1,MAX);
			int f = rnd.next(s,MAX);
			interval[i] = make_pair(s,f);
		}
		print(n,k);
	}
	return 0;
}
