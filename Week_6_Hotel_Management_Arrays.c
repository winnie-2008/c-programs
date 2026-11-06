/*
Name: Winnie Wairimu Mugo
Reg no: CT100/G/30690/26
Description: Hotel management system using 1D, 2D and 3D arrays
Date: 30/10/2026
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    double revenue[7];
    double totalRevenue = 0.0;
    double averageRevenue;
    int occupancy[5][10];
    int chain[3][5][10];
    int day, floor, room, branch;
    int occupied, vacant;
    int totalOccupied = 0;

    const char *days[7] = {
        "Monday", "Tuesday", "Wednesday", "Thursday",
        "Friday", "Saturday", "Sunday"
    };

    printf("HOTEL MANAGEMENT SYSTEM\n");
    printf("\n1D ARRAY - WEEKLY REVENUE\n");

    for (day = 0; day < 7; day++) {
        printf("Enter revenue for %s (KSh): ", days[day]);
        if (scanf("%lf", &revenue[day]) != 1 || revenue[day] < 0) {
            printf("Invalid revenue entered.\n");
            return 1;
        }
        totalRevenue += revenue[day];
    }

    averageRevenue = totalRevenue / 7.0;
    printf("Total weekly revenue: KSh. %.2f\n", totalRevenue);
    printf("Average daily revenue: KSh. %.2f\n", averageRevenue);

    printf("\n2D ARRAY - ROOM OCCUPANCY (ONE BRANCH)\n");
    printf("Enter 1 for occupied and 0 for vacant.\n");

    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            do {
                printf("Floor %d, Room %d (0 or 1): ", floor + 1, room + 1);
                if (scanf("%d", &occupancy[floor][room]) != 1) {
                    printf("Invalid input. Please restart the program.\n");
                    return 1;
                }
                if (occupancy[floor][room] != 0 &&
                    occupancy[floor][room] != 1) {
                    printf("Enter only 0 or 1.\n");
                }
            } while (occupancy[floor][room] != 0 &&
                     occupancy[floor][room] != 1);
        }
    }

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        for (room = 0; room < 10; room++) {
            occupied += occupancy[floor][room];
        }
        vacant = 10 - occupied;
        printf("Floor %d: Occupied = %d, Vacant = %d\n",
               floor + 1, occupied, vacant);
    }

    printf("\n3D ARRAY - MULTIPLE BRANCHES\n");
    srand((unsigned int)time(NULL));

    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                totalOccupied += chain[branch][floor][room];
            }
        }
    }

    printf("Total occupied rooms across all 3 branches: %d\n",
           totalOccupied);
    printf("Total rooms across all branches: 150\n");

    return 0;
}
