#include <bits/stdc++.h>
using namespace std;

class Subject {
public:
    string subjectname;
    int credit;
    float grade;

    Subject(string subjectname, int credit, float grade) {
        this->subjectname = subjectname;
        this->credit = credit;
        this->grade = grade;
    }
};

class Student {
public:
    string name;
    vector<Subject> subjects;

    Student(string studentname) {
        name = studentname;
    }

    void addsubject(string subname, int credit, float grade) {
        Subject newsubject(subname, credit, grade);
        subjects.push_back(newsubject);
    }

    float calculatecgpa() {
        int total_credit = 0;
        float weightgrade = 0;
        for (const Subject &subject : subjects) {
            total_credit += subject.credit;
            weightgrade += subject.credit * subject.grade;
        }
        return (total_credit > 0) ? weightgrade / total_credit : 0;
    }

    void displaycgpa() {
        cout << "Student Name: " << name << endl;
        float cgpa = calculatecgpa();
        cout << fixed << setprecision(2) << "CGPA: " << cgpa << endl;
    }
};

int main() {
    cout << "HERE IS YOUR CGPA CALCULATOR\n" << endl;
    string student_name;
    int num_sub;

    cout << "Enter Student Name: ";
    getline(cin, student_name);

    cout << "Enter the number of subjects: ";
    cin >> num_sub;
    cin.ignore(); // Clear input buffer

    Student student(student_name);

    for (int i = 0; i < num_sub; i++) {
        string subname;
        int credit;
        float gradepoint;

        cout << "Enter the subject Name: ";
        getline(cin, subname);

        cout << "Enter Credit of " << subname << ": ";
        cin >> credit;

        cout << "Enter the Grade Point: ";
        cin >> gradepoint;
        cin.ignore(); // Clear input buffer for next iteration

        student.addsubject(subname, credit, gradepoint);
    }

    student.displaycgpa();

    return 0;
}
