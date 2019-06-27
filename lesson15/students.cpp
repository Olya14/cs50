#include <iostream>
#include <cstring>
#include <cstdio>
#include "students.h"

using namespace std;

int main(void){
    int enrollment = 2;
    cin >> enrollment;
    student students[enrollment];

    for (int i = 0; i < enrollment; i++) {
        cin >> students[i].name;
        cin >> students[i].age;
    }

    for (int i = 0; i < enrollment; i++) {
        cout << students[i].name << endl;
        cout << students[i].age << endl;
    }

    //v2
    // student sarah = {"Sarah", 13};
    // cout << sarah[i].name << endl;
    // cout << sarah[i].age << endl;

    // student ciel;
    // ciel.name = "Ciel";
    // ciel.age = 13;
    // cout << ciel[i].name << endl;
    // cout << ciel[i].age << endl;

    FILE *file = fopen("students.csv", "w");
    if (file) {
        for (int i = 0; i < enrollment; i++) {
            fprintf(file, "%s,%i\n", (students[i].name).c_str(), students[i].age);
        }
        fclose(file);
    }
    return 0;
}