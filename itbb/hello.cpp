#include <iostream>
#include <tbb/tbb.h>
using namespace std;
using namespace tbb;
class HelloWorld {
const char* id;
public:
HelloWorld(const char* s) : id(s) {}
void operator()() const {
cout << "Hello from task "
<< id << "\n"; }
};
int main() {
task_group tg;
tg.run(HelloWorld("1"));
tg.run(HelloWorld("2"));
tg.wait();
return EXIT_SUCCESS;
}
