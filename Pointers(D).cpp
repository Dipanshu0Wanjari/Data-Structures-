#include <iostream>
#include <string>
using namespace std;


struct StudRecord {
    int studentid;
    string student_name;
    int age;
    char grade;
};

StudRecord *record() {
    StudRecord *p = new StudRecord;

    cout << "Enter Student id: ";
    cin >> p->studentid;

    cout << "Enter Student Name: ";
    cin>> p->student_name;

    cout << "Enter Age: ";
    cin >> p->age;

    cout << "Enter Grade: ";
    cin >> p->grade;

    return p;
}

int main() {
    
    StudRecord   *p = record();
    cout << "Student Record:"<<endl;
    cout << "Student id: " << p->studentid << endl;
    cout << "Student Name: " << p->student_name << endl;
    cout << "Age: " << p->age << endl;
    cout << "Grade: " << p->grade << endl;
    
    return 0;
}
