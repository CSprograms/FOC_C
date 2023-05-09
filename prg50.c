#include <stdio.h>

#define NUM_DAYS 14

int main() {
    int i;
    float wind_speed[NUM_DAYS];
    float sum = 0.0;
    float average, highest, lowest, diff;

    // Input the wind speeds for each day
    for (i = 0; i < NUM_DAYS; i++) {
        printf("Enter the fastest wind speed for day %d: ", i + 1);
        scanf("%f", &wind_speed[i]);
        sum += wind_speed[i];
    }

    // Calculate the average wind speed
    average = sum / NUM_DAYS;

    // Find the highest wind speed and the day it occurred
    highest = wind_speed[0];
    int highest_day = 1;
    for (i = 1; i < NUM_DAYS; i++) {
        if (wind_speed[i] > highest) {
            highest = wind_speed[i];
            highest_day = i + 1;
        }
    }

    // Find the lowest wind speed and the day it occurred
    lowest = wind_speed[0];
    int lowest_day = 1;
    for (i = 1; i < NUM_DAYS; i++) {
        if (wind_speed[i] < lowest) {
            lowest = wind_speed[i];
            lowest_day = i + 1;
        }
    }

    // Calculate the difference between the highest wind speed and each day's average wind speed
    printf("\nDay\tWind Speed\tDifference from Average\n");
    for (i = 0; i < NUM_DAYS; i++) {
        diff = highest - wind_speed[i];
        printf("%d\t%.2f\t\t%.2f\n", i + 1, wind_speed[i], diff);
    }

    // Output the results
    printf("\nAverage wind speed over two weeks: %.2f\n", average);
    printf("Highest wind speed (%.2f) occurred on day %d\n", highest, highest_day);
    printf("Lowest wind speed (%.2f) occurred on day %d\n", lowest, lowest_day);

    return 0;
}
