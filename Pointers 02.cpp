#include<bits/stdc++.h>
using namespace std;

int call_by_value(int n)
{
	cout<<"address of n in call_by_value function :"<<&n<<endl;
	n *= n;
	return n;
}
int main()
{
	int n=8;
	cout<<"Address of n in main() :"<<&n<<endl;
	cout<<"Ans :"<<call_by_value(n)<<endl;
	cout<<"Value of n :"<<n<<endl;
	return 0;
	
}
