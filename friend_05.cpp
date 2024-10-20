#include <iostream>

class Myclass {

public:
	void f()
	{
		Myclass x;
		foo(x); //valid - ADL
	}

	friend void foo(Myclass)
	{
		std::cout << "friend foo(Myclass)\n";
	}
};

int main()
{
	Myclass m;
	m.f();
}
