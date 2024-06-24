#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;

    // Constructor
    Student(int r, string n) {
        rollNo = r;
        name = n;
    }

    // Function to fetch data
    void fetchData() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    // Create a Student object
    Student s1(1, "John Doe");

    // Fetch and print student data
    s1.fetchData();

    return 0;
}