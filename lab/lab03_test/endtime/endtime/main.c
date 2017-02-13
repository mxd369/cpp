//
//  main.c
//  endtime
//
//  Created by MXD on 2/12/17.
//  Copyright © 2017 MXD. All rights reserved.
//
#include <stdio.h>

int main(){
    
    int time,duration,end_time;
    
    printf("Enter the start time: ");
    scanf("%d",&time);
    printf("Enter the duration: ");
    scanf("%d",&duration);
    
    int count=0;
    
    if(duration>60){
        while(duration>60){
            
            duration=duration-60;
            count++;
        }
    }
    int hours,minutes;
    
    hours=(time/100+count)*100;	//(duration/60);
    
    minutes=time%100+duration;
    
    end_time=hours+minutes;
    
    if(end_time>=2400){
        
        end_time=end_time-2400;
        
    }
    
    printf("End time is %04d.\n",end_time);
    
    return 0;
}