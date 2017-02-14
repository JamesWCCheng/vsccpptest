//

#include <iostream>
#include <cstdlib>
#include <string>
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
      return *this;
    }
};

int main()
{
  cout<<"Hello Test"<<endl;
  return 0;
}