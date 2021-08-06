#include "testlib.h"
#include<iostream>
using namespace std;
const int MAX = 1e9;
const int MAXN = 2e5+10;
int main()
{
	registerValidation();
	//cout<<"run"<<endl;
	//string secret = inf.readLine();
	//ensuref(secret == (string)"3f130aac-d629-40d9-b3ad-b75ea9aa8052", "Secret not found!");
	int n = inf.readInt(1, MAXN, "N");
	inf.readSpace();
	int t = inf.readInt(1,n,"K");
	inf.readEoln();
	for (int i = 0; i < n; i++)
	{
		int s = inf.readInt(1, MAX, "s_i");
		inf.readSpace();
		int e = inf.readInt(s,MAX,"e_i");
		inf.readEoln();
	}
	//inf.readEoln();
	inf.readEof();
	return 0;
}
