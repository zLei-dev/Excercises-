#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Simple Calculator v2" << endl
         << "Go ahead and give me a simple equation. Give me an x and y value." << endl;
    double user_input_x ;
    double user_input_y;
    cin >> user_input_x >> user_input_y;

    cout << "Operation? " << endl;
    string user_input_operation;
    cin >> user_input_operation;

    if (user_input_operation == "+") {
        cout << "Here's the answer. " << user_input_x + user_input_y; 
    } else if (user_input_operation == "-") {
        cout << "Here's the answer. " << user_input_x - user_input_y;
    } else if (user_input_operation == "*") {
        cout << "Here's the answer. " << user_input_x * user_input_y;
    } else if (user_input_operation == "/") {
        cout << "Here's the answer. " << user_input_x / user_input_y;
    }
    return 0;
}