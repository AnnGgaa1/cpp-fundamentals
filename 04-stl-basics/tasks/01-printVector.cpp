#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Implement printVector to print the content of a given vector on screen.
// Each string in a new line.
string printVector(vector<string> vec){
for(auto element:vec){
    cout<<element<<'\n';
}
}


int main() {
    vector<string> vec {
        "Hello Coders School!",
        "Welcome to the best C++ course ever",
        "Man, this is crazy :)"
    };
    printVector(vec);
    return 0;
}
