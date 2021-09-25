#include <iostream>

struct STRUCT1
{
	int year;
	std::string name;
};

struct STRUCT2 
{
	std::string model;
	STRUCT1 struct1;
};

int main() {
	using namespace std;

	STRUCT2 struct2;
	struct2.model = "Model";
	struct2.struct1.year = 2001;
	struct2.struct1.name = "Name";

	cout << struct2.model << endl;
	cout << struct2.struct1.year << endl;
	cout << struct2.struct1.name << endl;

}