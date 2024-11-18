// Greysen Roy-Pascoe
// 11/16/2024
// From master branch
// This branch is for the first project about population size

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float organism_count = 0, days = 0;
    float population_increase_as_a_percentage = -1;


    while (organism_count < 2) {
        cout << "Enter the number of organisms. Must be 2 or greater: ";
        cin >> organism_count;
        cout << endl;
    }


    while (population_increase_as_a_percentage < 0) {
        cout << "What's the average daily population increase as a\npercentage? Don't include the % symbol. Cannot be negative: ";
        cin >> population_increase_as_a_percentage;
        cout << endl;
    }


    while (days < 1) {
        cout << "And What's the number of days in which these\norganisms with multiply? Cannot be less than 1: ";
        cin >> days;
        cout << endl;
    }

    int population_size = organism_count;
    for (int counter = 1; counter <= days; ++counter) { //turned population increase to decimal from percent
        population_size = population_size + population_size * (population_increase_as_a_percentage / 100);
        

        cout << left << setw(8) << counter << population_size << endl;
    }

    return 0;
}

