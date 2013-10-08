#include <iostream>

using namespace std;

int count=0;

class obj{
        public:
                obj(){
                        count++;
                        cout<<"in constructor, count is: "<<count<<endl;
                }
                ~obj(){
                        count--;
                        cout<<"in destructor, count is: "<<count<<endl;
                }
};


int main()
{
    cout << "Hello world!" << endl;
    obj A;
    return 0;
}
