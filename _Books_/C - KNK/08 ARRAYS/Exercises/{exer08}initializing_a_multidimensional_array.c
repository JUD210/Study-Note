/* Write a declaration for a two-dimensional array named temperature_readings that stores one month of hourly temperature readings. (For simplicity, assume that a month has 30 days.) The rows of the array should represent days of the month: the columns should represent hours of the day.
 */

#include <stdio.h>

int main() {
    // Random 720 temperatures (30 days * 24 hours) between 0~35 created by Random Number Generator.
    int temperature_readings[30][24] = {
        {17, 31, 23, 7, 21, 0, 8, 7, 10, 4, 34, 29, 30, 23, 8, 9, 17, 6, 32, 10, 34, 25, 18, 19},
        {20, 18, 35, 28, 2, 35, 18, 17, 35, 31, 1, 13, 10, 33, 26, 31, 32, 8, 24, 7, 13, 13, 12, 30},
        {8, 24, 1, 27, 24, 14, 26, 22, 3, 32, 26, 7, 28, 9, 27, 18, 31, 8, 0, 6, 24, 34, 18, 13},
        {5, 11, 22, 19, 25, 3, 5, 1, 22, 9, 21, 3, 3, 23, 31, 13, 2, 11, 5, 27, 34, 16, 3, 4},
        {8, 10, 22, 4, 16, 14, 16, 13, 21, 16, 27, 4, 14, 23, 35, 27, 26, 31, 4, 9, 15, 7, 22, 1},
        {34, 34, 19, 15, 32, 19, 0, 29, 11, 19, 6, 18, 33, 10, 2, 18, 5, 1, 7, 5, 15, 35, 4, 12},
        {0, 1, 1, 22, 34, 31, 21, 34, 20, 13, 34, 16, 17, 13, 20, 26, 20, 18, 32, 30, 0, 0, 27, 10},
        {12, 21, 23, 3, 28, 16, 8, 25, 22, 23, 1, 6, 24, 14, 27, 11, 34, 30, 31, 5, 6, 4, 9, 34},
        {2, 0, 18, 32, 18, 33, 28, 15, 27, 6, 8, 14, 4, 30, 27, 14, 26, 29, 19, 20, 7, 14, 20, 27},
        {12, 12, 7, 3, 13, 10, 11, 16, 13, 25, 12, 9, 9, 18, 30, 29, 4, 22, 13, 18, 35, 19, 23, 14},
        {9, 8, 33, 35, 3, 30, 1, 2, 6, 1, 27, 14, 11, 31, 35, 7, 14, 2, 20, 21, 10, 27, 17, 8},
        {24, 10, 32, 1, 16, 23, 3, 10, 11, 17, 6, 14, 28, 14, 15, 21, 18, 12, 12, 32, 6, 11, 0, 18},
        {12, 19, 12, 22, 7, 21, 11, 9, 30, 16, 34, 29, 29, 19, 2, 24, 32, 26, 6, 22, 0, 27, 26, 16},
        {32, 17, 27, 6, 7, 10, 29, 4, 2, 11, 1, 7, 13, 24, 1, 29, 0, 30, 14, 18, 34, 22, 8, 2},
        {0, 15, 25, 3, 25, 16, 20, 30, 17, 1, 19, 25, 18, 18, 21, 0, 28, 20, 19, 3, 20, 8, 26, 34},
        {34, 8, 17, 19, 26, 21, 1, 19, 5, 29, 9, 21, 15, 16, 22, 26, 24, 29, 13, 30, 26, 6, 13, 28},
        {11, 19, 17, 35, 6, 6, 24, 17, 18, 19, 26, 12, 5, 14, 22, 33, 1, 29, 5, 17, 8, 19, 5, 26},
        {30, 14, 0, 8, 29, 25, 8, 6, 23, 29, 7, 12, 17, 27, 1, 1, 26, 20, 0, 9, 2, 30, 32, 7},
        {0, 17, 12, 14, 5, 30, 18, 16, 9, 32, 12, 20, 9, 12, 33, 13, 16, 13, 4, 14, 24, 9, 8, 5},
        {21, 11, 18, 26, 23, 19, 21, 17, 34, 7, 10, 12, 31, 16, 23, 15, 16, 28, 0, 23, 35, 18, 8, 4},
        {4, 15, 11, 10, 30, 30, 35, 24, 35, 12, 12, 19, 35, 34, 29, 27, 12, 3, 18, 6, 3, 5, 20, 14},
        {24, 6, 15, 24, 2, 15, 30, 23, 30, 30, 6, 17, 15, 15, 3, 18, 21, 4, 27, 19, 23, 15, 11, 3},
        {2, 5, 26, 28, 18, 9, 34, 31, 23, 20, 13, 21, 22, 19, 29, 30, 24, 1, 32, 31, 29, 8, 25, 27},
        {35, 17, 33, 0, 13, 20, 35, 21, 13, 12, 11, 16, 5, 24, 33, 17, 12, 31, 4, 27, 26, 1, 17, 15},
        {19, 18, 13, 17, 28, 28, 9, 27, 21, 6, 24, 5, 4, 27, 11, 3, 17, 30, 33, 5, 33, 29, 23, 32},
        {32, 32, 29, 27, 9, 33, 14, 11, 31, 32, 33, 20, 24, 7, 5, 8, 11, 33, 10, 4, 24, 20, 3, 12},
        {27, 5, 18, 21, 21, 16, 21, 4, 17, 0, 3, 4, 4, 10, 19, 20, 16, 13, 30, 28, 6, 26, 32, 28},
        {11, 17, 11, 15, 7, 14, 14, 2, 6, 0, 14, 23, 8, 29, 33, 21, 18, 23, 9, 14, 31, 18, 0, 24},
        {28, 15, 20, 24, 13, 2, 4, 0, 32, 12, 6, 16, 20, 35, 3, 34, 15, 28, 29, 2, 26, 11, 8, 6},
        {8, 2, 24, 11, 26, 4, 6, 7, 25, 35, 2, 25, 11, 2, 15, 13, 33, 27, 32, 28, 12, 32, 14, 3}};

    return 0;
}