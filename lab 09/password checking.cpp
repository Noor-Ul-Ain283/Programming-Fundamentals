#include <iostream>
using namespace std;
int main()
{
	string password1;
	string password="noorulain";
	

	do
	{
		cout<<"Enter password: ";
		cin>>password1;
		
	
	}
	while(password1!=password);
	
	return 0;
}
