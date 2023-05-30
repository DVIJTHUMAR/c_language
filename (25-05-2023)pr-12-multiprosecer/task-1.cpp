#include <iostream>
using namespace std;

class Message{
private:
    string message;

public:
    Message(const string &msg ="") {
        message = msg;
    }

    void print() {
        cout << message <<endl;
    }

    void print(const string &additionalMsg) {
        cout << message <<" "<<additionalMsg <<endl;
    }
};

main() {
    Message msg1("Hello");
    msg1.print();

    Message msg2("Greetings");
    msg2.print("from the Message class!");
}
