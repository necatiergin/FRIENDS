//friend functions and name lookup

class Myclass {
	friend void foo(int)
	{
		//... 
		//foo(12); //invalid
		//Myclass::foo(12); //invalid
		//::foo(23);  //invalid 
	}
};


int main()
{
	//foo(24); //invalid
	//::foo(23);  //invalid
}
