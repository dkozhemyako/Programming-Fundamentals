/**
 * Done by:
 * Student Name: Dima Kozhemiako
 * Student Group: 123
 * Lab 2.2
 */

#include <iostream>
using namespace std;

int main() {
    enum Names { Dima, Natasha, Sergey, Kate, Kira, Roman, Max };

    //v4.1
    struct Student
    {
        Names name;
        float averageScore;
        bool dancing;
    };

    Student myStudents[7];

    myStudents[0] = { Dima, 1, true };
    myStudents[1] = { Natasha, 2, true };
    myStudents[2] = { Sergey, 3, false };
    myStudents[3] = { Kate, 4, false };
    myStudents[4] = { Kira, 5, true };
    myStudents[5] = { Roman, 5, true };
    myStudents[6].name = Max;
    myStudents[6].averageScore = 4;
    myStudents[6].dancing = true;

    int count = 0;

    for (int i = 0; i < 7; i++)

    {
        if (myStudents[i].averageScore == 5 && myStudents[i].dancing == true)
        {
            count++;
        }
    }
    float percent = (float)count * 100 / 7;

    cout << "v4.1^: " << percent << "%" << endl;

    //v4.2
    struct Student2
    {
        Names name;
        float course;
        bool army;
    };

    Student2 myStudents2[7];

    myStudents2[0] = { Dima, 1, true };
    myStudents2[1] = { Natasha, 2, true };
    myStudents2[2] = { Sergey, 3, false };
    myStudents2[3] = { Kate, 2, false };
    myStudents2[4] = { Kira, 5, true };
    myStudents2[5] = { Roman, 5, true };
    myStudents2[6].name = Max;
    myStudents2[6].course = 4;
    myStudents2[6].army = true;

    int count2 = 0;

    for (int i = 0; i < 7; i++)

    {
        if (myStudents2[i].course == 2 && myStudents2[i].army == false)
        {
            count2++;
        }
    }
    float percent2 = (float)count2 * 100 / 7;

    cout << "v4.2^: " << percent2 << "%";


    return 0;
}
