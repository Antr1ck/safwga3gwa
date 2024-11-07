#include <iostream>
#define SIZE 100

using namespace std;

class Reservior
{
private:
	char* name, * type;
	int length, width, depth;

public:
	Reservior() : name{ new char[SIZE] }, type{ new char[SIZE] }, length{ 0 }, width{ 0 }, depth{ 0 } {};
	void getname()
	{
		gets_s(name, SIZE);
	}
	char* setname()
	{
		return name;
	}
	void gettype()
	{
		gets_s(type, SIZE);
	}
	char* settype()
	{
		return type;
	}
	void getlen()
	{
		cin >> length;
	}
	int setlen()
	{
		return length;
	}
	void getwid()
	{
		cin >> width;
	}
	int setwid()
	{
		return width;
	}
	void getdep()
	{
		cin >> depth;
	}
	int setdep()
	{
		return depth;
	}
	void volume(Reservior f)
	{
		cout << f.depth * f.width;
	}
	void S(Reservior f)
	{
		cout << f.length * f.depth;
	}
	void comparison(Reservior f)
	{
		if (f.type == "Sea")
		{
			cout << "type Sea";
		}
		else if (f.type == "Ocean")
		{
			cout << "type Ocean";
		}
		else if (f.type == "River")
		{
			cout << "type River";
		}
		else if (f.type == "Swamp")
		{
			cout << "type Swamp";
		}
		else
		{
			cout << "Not Found";
		}
	}
	void comparison(Reservior f, Reservior s)
	{
		if (f.depth * f.length == s.depth * s.length)
		{
			cout << "the same area";
		}
		else if (f.depth * f.length > s.depth * s.length)
		{
			cout << "The first one has a larger area";
		}
		else
		{
			cout << "The second one has a larger area";
		}
	}
};

int main()
{
	Reservior first;

	first.setname();
	first.setdep();
	first.setlen();
	first.settype();
	first.setwid();
	first.comparison(first);
	first.S(first);
	first.volume(first);


	return 0;
}
