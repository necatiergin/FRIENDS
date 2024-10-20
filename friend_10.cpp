struct Nec {
    Nec(int) {}
    friend void func(Nec) {};
};

int main()
{
    Nec x{ 5 };
    func(x);    // valid (ADL)
    
    //func(7);    // invalid
    //::func(x);  // invalid
}
