#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include <time.h>


int lockdown = 0;
char logs[100][200]; 
int log_count = 0;   
char password[20];
int a,b,attempts=3,clearance = 0;
char clean [50];
int breached[16] = {0}; 
int anomalie_ids[16] = {8, 9 ,35 ,49, 55, 76, 79, 96, 106, 173, 409, 457, 610, 682, 1000, 5000};
int mtf_epilson11 = 10;
int mtf_beta7 = 7;
int mtf_alpha1 = 3;
int mtf_nu11 = 16; 
int total = 1500;
int maxdeath = 1000;
int death = 0;

void O5_menu()
{
    int i;
    int breached_count = 0;
    for(int i=0; i<16; i++)
        if(breached[i]==1) breached_count++;

    if(breached_count==0) return;

    printf("\n05 Menu\n");
    for (i = 0; i <= 16; i++)
    {
        if(breached[i]==1) 
        {
            printf("%d: SCP-%d breached\n", i, anomalie_ids[i]);
        }
    } 
}
void breach()
{
    int i,j;
    for (i = 0; i < 16; i++)
    {
        if (breached[i] == 0)
        {
            int chance = rand() % 100;
            if (chance < 5)
            {
                breached[i] = 1;
                printf("\n Anomalie-%d has breached containment!", anomalie_ids[i]);

                int maxdeath = rand() % 5 + 1;
                for (j = 0; j < maxdeath; j++)
                {
                    int r = rand() % 4;
                    switch (r)
                    {
                       case 0:
                        if(mtf_epilson11>0) mtf_epilson11--; break;
                       break;
                       case 1:
                        if(mtf_beta7>0) mtf_beta7--; break;
                       case 2:
                        if(mtf_alpha1>0) mtf_alpha1--; break;
                        case 3:
                        if(mtf_nu11>0) mtf_nu11--; break;
                      default:
                       break;
                    }
                    printf("%d personnel died trying to contain SCP-%d!\n", maxdeath, anomalie_ids[i]);
                }
                
            }
            
        }
        
    }
    
}

void history()
{
    printf("Site 19 was established in [REDACTED]. Located at [REDACTED].\n");
    printf("It is the biggest site and alot of operations happen there.\n");
    printf("It is the home of thousands of employees and Anomalies\n");
}

void anomalie457()
{
    printf("Object class: Eucild/Potential Keter\nDescription: Classified. \nContainment procedures: Classified\n");
}
void anomalie409()
{
    printf("Object class: Keter\nDescription: Details classified.\nContainment procedures: Classified.\n");
}

void anomalie106()
{
    printf("Object class: Keter.\n Description: No physical interaction is to made with 106, and must be aprroved by 2/3 of the 05 council.\n");
    printf("106 seems to be a elderly humanoid, with a general look of advanced decomposition.\n");
    printf("106 is not agile and is seen most times as still, waiting for its prey.\n");
    printf("Can be seen as being suspended in the ceiling as well.\n");
    printf("106 will decapitate major organs so the prey cant do anything.\n");
    printf("Containment procedures: 106 is to contained in a sealed container, with lead and metal, with truss structure surrounding it.\n");
    printf("It is to be kept up by magnets and not lowered down unless if a breach happens.\n");
}

void anomalie076()
{
    printf("Object class: Keter.\nDescription: 076-1 is a stone coffin with markings around it and scratchs and marks cover the coffin.\n");
    printf("Inside the coffin is 076-2, randomly a event happens and 076-2 is awakened. 076-2 is a 8ft tall man with black hair.\n");
    printf("He is extremly fast, strong and has survived rounds of bullets, suffoucation and fire.\n");
    printf("Sometimes he opens up a black portal in which he gets a black sword, if he makes any contact with any living thing then he will enter a rage state and try to kill everything.\n");
    printf("Containment procedures: The coffin is to be surround with a lead and metal box.\n");
    printf("The coffin should be placed 100ft underground away from the land. In case of a containment breach, the site is to be flooded.\n");
}

void anomalie055()
{
    printf("Object class: Keter.\nDescription: 055 is a antimeme, which is basically a anomalie that keeps all info about it to itself.\n");
    printf("Test subjects are fully allowed to draw, write or take notes about it.\n");
    printf("Containment procedures: A lead 5*5 room made with metal as well. With lead on the sides.\n");  
}

void anomalie035()
{
    printf("Object class: Keter.\nDescription: Anomalie 035 is a procelin drama mask that makes anyone near it want to where it.\n");
    printf("It produces a highly corosive acid which can melt most metals. When anyone wears it\n");
    printf("the person immediately dies and the mask takes control over the body and controls it.\n");
    printf("It will then try to escape to quickly get another host since the host only lives for 5+ minutes.\n");
    printf("Containment procedures: A bullet, acid resistance glass should be place around the mask and another layer of it should be placed.\n");
    printf("A lead stand will hold the mask with the glass fully surrounding it with gas to prevent anyone going inside.\n");
}

void anomalie008()
{

}
void records()
{
    printf("\n=========Employees Records=========\n");
    printf("Mtf = 500\n");
    printf("Researcher = 100\n");
    printf("Test subjects = 1000\n");
    printf("Security = 900\n");
    printf("Total = 1500");
}

void site_research()
{
    printf("=========Site research=========\n");
    printf("Newly uncovered data: \n");
    printf("Anomaly 173(Euclid) = Secretes red liquid on the floor once killing someone.\n");
    printf("Anomaly 682(Keter) = Highly intelligent and has a deep hatred for humannity.\n");
    printf("Anomaly 457(Euclid, Potential Keter) = Burns faster in daylight");
}

void site_anomalies()
{
    printf("========Site 19 Anomalies========");
    printf("Anomalies: 002, 003, 008, 009\n, 013, 035, 049, 055, 076\n , 079, 096, 105, 106 \n, 173, 200, 273, 409, 457, 500, 610, 682, 998, 1000, 5000\n");
    printf("WARNING HIGH RISK ANOMALIES: CLEARNANCE 4+ PERSONALL ONLY!\n");
    char password[50];
    int choice;
    int cho;
    printf("Enter credentials(one attempt): ");
    scanf("%19s",password);
    if (strcmp(password, "1!86shak") == 0)
    {
        printf("High Risk Anomalies = 0. 008 1. 035, 2. 055, 3. 076, 4. 106, 5. 409, 6. 457, 7. 610, 8. 682, 9. 5000");
        printf("Enter which one you would like to check: ");
        scanf("%d",&choice);
    }
    else
    {
        printf("CREDENTIALS FAILED. SECURITY ALERT SENT");
        exit(0);
    }
    switch (choice)
        {
        case 0:
            anomalie008();
            break;
        case 1:
            anomalie035();
            break;
        case 2:
            anomalie055();
            break;
        case 3:
            anomalie076();
            break;
        case 4:
            anomalie106();
            break;
        case 5:
            anomalie409();
            break;
        case 6:
            anomalie457();
            break;
        default:
            break;
        }
}

int main()
{   
    srand(time(NULL));
    while (attempts--)
    {
        breach();      
        O5_menu();
        printf("Enter Password: ");
        scanf("%49s", password);

        if (strcmp(password, "1@#") == 0) clearance = 1;
        else if (strcmp(password, "05c#!") == 0) clearance = 2;
        else if (strcmp(password, "P0$$^1!#") == 0) clearance = 3;
        else if (strcmp(password, "As8&*!@)") == 0) clearance = 4;
        else if (strcmp(password, "@01785#poa") == 0) clearance = 5;
        else
        {
            printf("ACCESS DENIED - SECURITY ALERT SENT\n\n");
            return 0;
        }

        printf("ACCESS GRANTED — CLEARANCE LEVEL %d\n\n", clearance);
        break;
    }
    while (1)
    {
    if (clearance == 0)
    {
        printf("TERMINAL LOCKED.\n");
        return 0;
    }
    printf("\n=======Site 19 Terminal=======\n");
    printf("1.Site information\n");
    printf("2.Site cleanliness\n");
    printf("3.Records\n");
    printf("4.Site research\n");
    printf("5.Site anomalies\n");
    printf("6.History\n");
    printf("7.Exit\n");
    printf("Enter which one you would like to check: ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Site information\n");
        printf("Site 19 is the biggest site out of all the other ones\n");
        printf("It also houses the most anomalies, dangerous and friendly\n");
        printf("It has tons of employees working.\n");
        printf("Anomaly security levels: Primary: Safe,Euclid,Keter, Secondary: Appolyon, Explained, Decommisoned, Esoteric, Etc\n");
        printf("Location: [Unknown]\n");
        printf("Status: [Operational]");
        break;
    case 2:
        if (clearance < 2)
            {
                printf("ACCESS DENIED — LEVEL 2 REQUIRED\n\n");
                break;
            }
        printf("Enter the amount of janitors(0-20): ");
        scanf("%d",&b);
        if (b<3)
            strcpy(clean, "Filthy\n");
        else if (b<=7)
            strcpy(clean, "Normal\n");
        else if (b<=15)
            strcpy(clean, "Clean\n");
        else if (b<=20)
            strcpy(clean, "Spotless");
        else
            strcpy(clean, "Invalid input");
        printf("Working out site cleanliness");
        getch();
        printf("---------Site status---------\n");
        printf("Site cleanliness: %s\n",clean);
        break;
    case 3:
    if (clearance < 3)
    {
        printf("ACCESS DENIED - LEVEL 3 REQUIRED");
        break;
    }
        records();
        break;
    case 4:
    if (clearance < 3)
    {
        printf("ACCESS DENIED - LEVEL 3 REQUIRED");
        break;
    }
        site_research();
        break;
    case 5:
    if (clearance < 4)
    {
        printf("ACCESS DENIED - LEVEL 4 REQUIRED");
        break;
    }
        site_anomalies();
        break;
    case 6:
    if (clearance < 5)
    {
        printf("ACCESS DENIED - LEVEL 4 REQUIRED");
        break;
    }
        history();
        break;
    
    case 7:
        exit(0);
    default:
        printf("Invalid choice");
        break;
    }
    }
    return 0;
}