//
// Created by Илья on 026 26.01.20.
//

#include <iostream>
#include <student.h>

#include "dean.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    Deanery* hse_deanery = new Deanery();
    hse_deanery->createGroup("students4.txt", "groups_spec.txt");
    hse_deanery->addRandomMarks(5);
    hse_deanery->printData();
    hse_deanery->fullStatistics();
    hse_deanery->changeGroup("Jessie Petty", "18PI-1", "18FM");
    hse_deanery->fullStatistics();
    hse_deanery->excludeStudents();
    hse_deanery->fullStatistics();
    hse_deanery->chooseHeads();
    hse_deanery->fullStatistics();
    hse_deanery->saveData("saved_data.txt", "saved_groups.txt");
    return 0;
}