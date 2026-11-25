// This is a program for campus shuttle fare calculator.

#include <stdio.h>
int main()
{
    int start, end, student;
    float fare, discount=0, finalfare;

    int fares[5][5]={
        {0,100,200,300,400},
        {100,0,100,200,300},
        {100,200,0,100,200},
        {100,200,300,0,400},
        {100,200,300,400,0}
    };
    

    printf("CAMPUS SHUTTLE FARE CALCULATOR \n \n");
    
    printf("DESTINATIONS\n");
    printf("1. CAMPUS\n");
    printf("2. Clock Tower\n");
    printf("3. ISBT\n");
    printf("4. Rajpur Road\n");
    printf("5. Railway Station\n");
    printf("6. Airport\n \n");
    printf("Enter your boarding stop: ");
    scanf("%d", & start);

    printf("Enter destination stop: ");
    scanf("%d", & end);
    printf("\n");

    if (start<1 || start >6 || end<1 || end>6)
    {
        printf("invalid stop");
        return 0;
    }

    if (start==end)
    {
        printf("Boarding point and destination cannot be same");
        return 0;
    }

    fare = fares[start - 1][end - 1];

    printf("Are you a student ? (1 for Yes, 0 for No): ");
    scanf("%d", &student);

    if (student ==1)
    {
        discount= fare*0.20;
    }

    finalfare=fare-discount;

    printf("Journey from Stop %d to Stop %d \n", start,end);
    printf("Base fare: Rs. %.2f \n", fare);
    printf("Concession: Rs.%.2f \n", discount);
    printf("Final Fare: Rs.%.2f \n", finalfare);
    
    return 0;

}