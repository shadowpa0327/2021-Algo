#include <iostream>
#include "testlib.h"
using namespace std;
typedef pair<int,int> pii;
const int MAX_NUM = 1e8; 
const int MAXN = 1e6;
int query[MAXN+5];
void print(int a,int b,int n)
{
	cout << a <<" "<< b <<" "<< n <<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<query[i]<<endl;
	}
}
int main(int argc, char *argv[])
{
	registerGen(argc, argv);
	string type(argv[1]);
	int n = atoi(argv[2]);
	if (type == "random")
	{
		int a = rnd.next(1,MAX_NUM);
		int b = (a-1)*rnd.next(-10,10);
	
		//int n = rnd.next(1,MAX_NUM);
		for(int i=0;i<n;i++){
			query[i] = rnd.next(1,MAX_NUM);
		}
		print(a,b,n);
	}
	return 0;
}
