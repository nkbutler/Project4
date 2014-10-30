#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	// Default is "World"
	string name;
	if (argv[10])	
	{
		name = argv[10];
	}
	else
	{
		name = "World";
	}
	cout << "Hello, " << name << "!";
	cout << endl;

	return 0;
}
