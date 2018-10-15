/**
 * Time calcuations.
 *
 * Copyright (c) 2018, Sekhar Ravinutala.
 */

#include "ex3/time.h"
#include <assert.h>


int getMinutes(int, int);

int computeDifference(
    int startHours, int startMinutes, bool startIsAm,
    int futureHours, int futureMinutes, bool futureIsAm
) {
    /**
     * Calculate time difference in minutes.
     * - startHours: Start hours (1-12)
     * - startMinutes: Start minutes (0-59)
     * - startIsAm: Start AM/PM (true if AM)
     * - futureHours: Future hours (1-12)
     * - futureMinutes: Future minutes (0-59)
     * - futureIsAm: Future AM/PM (true if AM)
     */

    if((startIsAm == futureIsAm) && (futureHours > startHours)){

        int hours = futureHours - startHours;

        int minutes = (hours * 60) + getMinutes(startMinutes, futureMinutes);

        return minutes;
    }
    else if((startIsAm == futureIsAm) && (futureHours < startHours)){

        int hours = futureHours;

        int minutes = (hours * 60) + getMinutes(startMinutes, futureMinutes);

        return minutes;
    }
    else if ((startIsAm == futureIsAm) && (startHours == futureHours)){
        //test 3 is wrong for this one
        int hours;//if it's the same hour going forward minutes then the else clause works
        //otherwise, it's 23 hours ahead and 
        int minutues;
        int totalMinutes;
        if (startMinutes > futureMinutes){//if the case it that we go fully around the clock, then hours = 23. if it was 9:05 am and then we go to 9:04 am, it's 23 hours and 59 minutes
            hours = 23;
            totalMinutes = (hours * 60) + (60 - futureMinutes);
            minutues = totalMinutes;
        }else
        {
            minutues = futureMinutes - startMinutes;
        }

        return minutues;//check if it's the time before like 11:58PM if the start is 11:59PM

    }
    
    if((startIsAm != futureIsAm) && (startHours != 12)){
        
        int hoursTo12 = (12 - startHours) * 60; 
        int totalMinutes = hoursTo12 - startMinutes; 

        int futureTotalMins;
        if(futureHours == 12){
            futureTotalMins = futureMinutes;
        }
        else{
            futureTotalMins = (futureHours * 60) + futureMinutes;
        }

        int minutes = totalMinutes + futureTotalMins;
        return minutes;

    }
   
    else if ((startIsAm != futureIsAm) && (startHours == 12)){
        //if startHours is 12 am or pm, then we have a special case. We need to create the hours until the next 12 o'clock

        int hours = 11;
        int minutesTo12 = 60 - startMinutes; //11 is hours until the next 12 and minutesTo12 are the additional minutes to add to it
        int totalPre12Mins = (hours * 60) + minutesTo12; //this should be the total number of minutes before the next 12 if start is 12

        int second12;

        if(futureHours == 12){
            second12 = 0;
        }
        else{
            second12 = futureHours;
        }

        int totalSecond12 = (second12 * 60) + futureMinutes; //this should give us the total minutes after the clock strikes 12

        int minutes = totalPre12Mins + totalSecond12; //the total minutes

        return minutes;
    }

    
}
//computeDifference(11, 30, true, 4, 40, false)
   // Which is: 550
int getMinutes(int startMinutes, int futureMinutes){
   
    int minutes;
    if (startMinutes == 0){
        minutes = futureMinutes;
    }
    else{
        minutes = (60 - startMinutes) + futureMinutes;
    }
    
    return minutes;
}
