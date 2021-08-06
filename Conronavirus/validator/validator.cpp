#include "testlib.h"
#include<iostream>
using namespace std;
const int MAXN = 1e7;
const int MAX_VAL = 1e8;
int main()
{
	registerValidation();
	//cout<<"run"<<endl;
	//string secret = inf.readLine();
	//ensuref(secret == (string)"3f130aac-d629-40d9-b3ad-b75ea9aa8052", "Secret not found!");
	int a = inf.readInt(1, MAX_VAL, "A");
	inf.readSpace();
	int b = inf.readInt(-10*MAX_VAL,10*MAX_VAL,"B");
	inf.readSpace();
	int n = inf.readInt(1,MAXN,"N");
	inf.readEoln();
	for (int i = 0; i < n; i++)
	{
		int s = inf.readInt(1, MAX_VAL, "q_i");
		inf.readEoln();
	}
	//inf.readEoln();
	inf.readEof();
	return 0;
}
