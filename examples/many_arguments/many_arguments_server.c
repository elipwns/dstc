// Copyright (C) 2018, Jaguar Land Rover
// This program is licensed under the terms and conditions of the
// Mozilla Public License, version 2.0.  The full text of the
// Mozilla Public License is at https://www.mozilla.org/MPL/2.0/
//
// Author: Magnus Feuer (mfeuer1@jaguarlandrover.com)
//
// Running example code from README.md in https://github.com/PDXOSTC/dstc
//

#include <stdio.h>
#include <stdlib.h>
#include "dstc.h"


// Generate deserializer for multicast packets sent by the client
// The deserializer decodes the incoming data and calls the
// many_arguments() function in this file.
//
DSTC_SERVER(many_arguments,
            int,,
            int,,
            int,,
            int,,
            int,,
            int,,
            int,,
            int,,
            int,,
            int,,
            int,,
            int,,
            int,,
            int,,
            int,,
            int,)
//
// Print out name and age.
// Invoked by deserilisation code generated by DSTC_SERVER() above.
// Please note that the arguments must match between the function below
// and the macro above.
//
void many_arguments(int a1,
                    int a2,
                    int a3,
                    int a4,
                    int a5,
                    int a6,
                    int a7,
                    int a8,
                    int a9,
                    int a10,
                    int a11,
                    int a12,
                    int a13,
                    int a14,
                    int a15,
                    int a16)
{
    if (a1 != 1) {
        printf("a1 is %d. Wanted 1\n", a1);
        exit(255);
    }
    if (a2 != 2) {
        printf("a2 is %d. Wanted 2\n", a2);
        exit(255);
    }
    if (a3 != 3) {
        printf("a3 is %d. Wanted 3\n", a3);
        exit(255);
    }
    if (a4 != 4) {
        printf("a4 is %d. Wanted 4\n", a4);
        exit(255);
    }
    if (a5 != 5) {
        printf("a5 is %d. Wanted 5\n", a5);
        exit(255);
    }
    if (a6 != 6) {
        printf("a6 is %d. Wanted 6\n", a6);
        exit(255);
    }
    if (a7 != 7) {
        printf("a7 is %d. Wanted 7\n", a7);
        exit(255);
    }
    if (a8 != 8) {
        printf("a8 is %d. Wanted 8\n", a8);
        exit(255);
    }
    if (a9 != 9) {
        printf("a9 is %d. Wanted 9\n", a9);
        exit(255);
    }
    if (a10 != 10) {
        printf("a10 is %d. Wanted 10\n", a10);
        exit(255);
    }
    if (a11 != 11) {
        printf("a11 is %d. Wanted 11\n", a11);
        exit(255);
    }
    if (a12 != 12) {
        printf("a12 is %d. Wanted 12\n", a12);
        exit(255);
    }
    if (a13 != 13) {
        printf("a13 is %d. Wanted 13\n", a13);
        exit(255);
    }
    if (a14 != 14) {
        printf("a14 is %d. Wanted 14\n", a14);
        exit(255);
    }
    if (a15 != 15) {
        printf("a15 is %d. Wanted 15\n", a15);
        exit(255);
    }
    if (a16 != 16) {
        printf("a16 is %d. Wanted 16\n", a16);
        exit(255);
    }

    puts("16 arguments received with correct values.");

    exit(0);
}

int main(int argc, char* argv[])
{
    // Process incoming events forever
    while(1)
        dstc_process_events(-1);
}
