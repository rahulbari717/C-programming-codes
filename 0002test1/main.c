/*
 * main.c
 *
 *  Created on: Oct 9, 2024
 *      Author: Rahul B.
 */
#include <stdio.h>

int main() {
    int total_tasks = 193;  // Total number of tasks
    int completed_tasks;     // To store the number of completed tasks
    float percentage;        // To store the percentage

    // Prompt the user to enter the number of completed tasks
    printf("Enter the number of completed tasks (0 to %d): ", total_tasks);
    scanf("%d", &completed_tasks);

    // Input validation
    if (completed_tasks < 0 || completed_tasks > total_tasks) {
        printf("Invalid input! Please enter a number between 0 and %d.\n", total_tasks);
        return 1; // Exit the program with an error code
    }

    // Calculate the percentage of completed tasks
    percentage = (completed_tasks / (float)total_tasks) * 100;

    // Display the completion status
    printf("Completed: %d out of %d - %.2f%%\n", completed_tasks, total_tasks, percentage);

    // Check if all tasks are completed
    if (completed_tasks == total_tasks) {
        printf("100%% Complete!\n");
    }

    return 0;
}
