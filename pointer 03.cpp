
#include<bits/stdc++.h>
using namespace std;
struct Data
{
	int x;
	char c;
	float f;
	
	void Printer()
	{
		cout<<x<<endl;
		cout<<c<<endl;
		cout<<f<<endl;
	
	}
};

int main()
{
	
    Data d;
	d.x=3;
	d.c='d';
	d.f=3.77;
	d.Printer();
	
	return 0;
	
	
}
