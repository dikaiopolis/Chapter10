//
//  main.c
//  Time
//
//  Created by Daniel Baldwin on 8/13/13.
//  Copyright (c) 2013 Daniel Baldwin. All rights reserved.
//
//This programs calculates the date 4,000,000 seconds from now by first finding the number of seconds between 1970 and now and then adding 4,000,000 seconds to that and printing out that date in MM-DD-YYYY format.

#include <stdio.h>
#include <time.h>


int main(int argc, const char * argv[])
{
    long secondsSince1970 = time(NULL);
    
    //This structure holds the seconds between 1970 and now
    struct tm now;
    localtime_r(&secondsSince1970, &now);
    
    //This adds 4,000,000 seconds to secondsSince1970
    secondsSince1970 = secondsSince1970 + 4000000;
    
    struct tm then;
    localtime_r(&secondsSince1970, &then);
    
    //By adding 1 to tm_mon it starts the counting at 1 instead of 0, by adding 1900 to tm_year it displays the years since 0 instead of since 1900
    printf("The date 4,000,000 seconds from now will be %d-%d-%d\n", then.tm_mon+1, then.tm_mday, then.tm_year+1900);
    

    return 0;
}

