//using reference variable
#include<bits/stdc++.h>
using namespace std;

int call_by_reference_variable(int &n)
{
	cout<<"address of n in call_by_reference_variable function :"<<&n<<endl;
	n *= n;

}
int main()
{
	int n=8;
	cout<<"Address of n in main() :"<<&n<<endl;
	call_by_reference_variable(n);
	cout<<"ans :"<<n<<endl;
	cout<<"Value of n :"<<n<<endl;
	return 0;
	
	
}
