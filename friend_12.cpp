#include <iostream>

namespace nec {
    class A {
    public:
        A(int val) : m_val(val) {}

    private:
        int m_val;

        friend bool operator==(const A& lhs, const A& rhs)
        {
            return lhs.m_val == rhs.m_val;
        }
    };
}


int main()
{
    nec::A a1(5), a2(5);

    if (a1 == a2)
        std::cout << "equal\n";
}
