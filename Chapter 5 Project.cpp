// Greysen Roy-Pascoe
// 11/17-18/2024
// From Main branch
// This is the 2nd project of Chp. 5 - Student Lineup

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input_object;
    input_object.open("C:\LineUp.txt");

    if (!input_object) {
        cout << "Something went wrong with opening the file\n"; // Checking if the file opened correctly
    }

    string name, first_name_in_the_line = "aaa", last_name_in_the_line = "zzz"; // Making some variables to compare the input to (Thanks ChatGPT for clueing me in on this way of doing it)
    int number_of_students = 0; // counter

    while (input_object >> name) {
        ++number_of_students;

        if (name < first_name_in_the_line) {
            first_name_in_the_line = name;
        }

        if (name > last_name_in_the_line) {
            last_name_in_the_line = name;
        }
    }

    input_object.close();

    cout << "The number of students in the list is " << number_of_students << endl;
    cout << "The first person in line would be " << first_name_in_the_line << endl;
    cout << "The last person would be " << last_name_in_the_line << endl;

    return 0;
}

