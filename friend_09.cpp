class B {};

class Nec
{
    int mnec; 

    class Nested {}; 
    enum { e = 20 }; 

    friend class A; 
    friend B; // C++11

    //friend class M, N;   //C++26
};

class A : Nec::Nested 
{
    Nec::Nested mx; 

    class B
    {
        Nec::Nested my; 
    };

    int ar[Nec::e]; 
};
