//

#include <iostream>
#include <cstdlib>
using namespace std;

class Foo
{
  public:
    Foo()
    {}
    explicit Foo(const Foo&)
    {
      cout<<__PRETTY_FUNCTION__<<endl;
    }
    Foo(Foo&&)
    {
      cout<<__PRETTY_FUNCTION__<<endl;
    }
    Foo& operator=(Foo&&)
    {
      cout<<__PRETTY_FUNCTION__<<endl;
    }
};

int main()
{
  return 0;
}