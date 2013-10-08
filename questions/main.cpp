#include <iostream>

using namespace std;

int count=0;

class Foo {
    int i;
    public:
            Foo(int x): i(x) {}
            void list(){
                cout <<" i is : "<< i<<endl;
            }
 };



int main()
{
   Foo *f = new Foo(1);
   Foo A(100);


  // Foo &f = new Foo(1);
  //int i = Foo::i;
   //Foo *af = new Foo[10];
  const Foo &af = Foo(99);
cout <<"here"<<endl;
  f->list();
  A.list();
 *af.list();


    return 0;
}
