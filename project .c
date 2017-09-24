#include<stdio.h>
#include<windows.h>
#define ENTER 13


struct cric{
    char team_name[100];
    char player_name[100];
    char born[100];
    char birth_place[100];
    char role[100];
    char batting_style[100];
    char bowling_style[100];
    char married[100];
    int match;
    int age;
    int salary_per_match;
    int batting_rank;
    int bowling_rank;
    int all_rounder_rank;
    float height;
    float weight;
    float batting_average;
    float bowling_average;
    float batting_strike_rate;
    float econmic;
};


int main ()
{
    system("color 7B");
   struct cric team[44];

    char newline, Password[10], Query[10], x[100];
    int y, costt;
    //int i=0;
    int i,a, key;
    char h;
    FILE *fa;
    fa=fopen("cric.txt", "r");
    for(i=0; i<44; i++)
    {
     fscanf(fa,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d:%d:%d:%d:%d:%d:%f:%f:%f:%f:%f:%f  ",team[i].team_name,team[i].player_name,team[i].born,team[i].birth_place,team[i].role,team[i].batting_style,team[i].bowling_style,team[i].married,&team[i].match,&team[i].age,&team[i].salary_per_match,&team[i].batting_rank,&team[i].bowling_rank,&team[i].all_rounder_rank,&team[i].height,&team[i].weight,&team[i].batting_average,&team[i].bowling_average,&team[i].batting_strike_rate,&team[i].econmic);

    }
    puts(team[i].team_name);

    printf("Please Enter Your Password:");

    {
        system("cls");
        system("color 30");
        printf("press your password");
        printf("\npress your password?\nThen Press 'fahim': ");
        scanf("%s",Query);
        if(strcmp(Query, "fahim")==0)

        {
            system("cls");
            system("color 34");
            main:printf("\n\tChoose any Option:\n");
            printf("\nPress '1' to see team name.\n");
            printf("\nPress '2' to player name\n");
            printf("\npress '3' to see player bron\n");
            printf("\npress '4' to see Role .\n");
            printf("\npress '5' to see Rank \n");
            printf("\npress '6' to see how many match play\n");
            printf("\npress '7' to see age\n");
            printf("\npress '8' to see\n");
            printf("\npress '9' to see \n");
            printf("\npress '10' to see\n");
            printf("\npress '11' to see\n");
            printf("\npress '12' to see \n");

            printf("\nPress '20' to Exit!\n");
            float r;
            int y;
            int a;

            while(1)
            {
               // system("cls");
                system("color 4B");

                scanf("%d", &key);

                if(key==1)
                    {
                    system("cls");
                    system("color D");
                    printf("Inter your country name\n\n");
                    scanf("%s",x);
                    for(i=0; i<44; i++)
                    {
                        if (strcmp(x, team[i].team_name)==0)

                        {
                            printf("%s",team[i].player_name);


                        }
                         printf("\n\tPress 1 to go back: ");
            scanf("%d",&a);
            if(a==1)
            {
                goto main;
            }

                    }
                    }


                else if(key==2)
               {
                    system("cls");
                    system("color  E");
                    printf("Inter your player name\n\n");
                    scanf("%s",x);
                printf("  birth_place\t\t team_name\t\tbowling_rank\t\tall_rounder_rank\n\n");
                    for(i=0; i<44; i++)
                    {
                        if (strcmp(x, team[i].player_name)==0)

                        {

                            printf("%s\t\t",team[i].birth_place);
                             printf("%s\t\t",team[i].team_name);
                            printf("%d\t\t",team[i].bowling_rank);
                           printf("%d\n",team[i].all_rounder_rank);


                        }
                         printf("\n\tPress 1 to go back: ");
            scanf("%d",&a);
            if(a==1)
            {
                goto main;
            }


                    }
                    }

                else if(key==3)
            {
                    system("cls");
                    system("color  E");
                    printf("Inter your player name\n\n");
                    scanf("%s",x);
                printf("  batting_rank\t\t bowling_rank\t\tall_rounder_rank\n\n");
                    for(i=0; i<44; i++)
                    {
                        if (strcmp(x, team[i].player_name)==0)

                        {

                            printf("%s\n",team[i].role);


                        }
                         printf("\n\tPress 1 to go back: ");
            scanf("%d",&a);
            if(a==1)
            {
                goto main;
            }


                    }
                    }




                else if(key==4)
              {
                    system("cls");
                    system("color A");



                    printf("player_name: \tbirth_place:\t\t\tteam_name:\t\t\t\tbowling_rank:\t\t\t\tall_rounder_rank:\n\n");

                    for(i=0; i<50; i++)
                    {
                        if (team[i].all_rounder_rank<10)

                        {
                           printf ("%s\t\t",team[i].player_name);
                            printf("%s\t\t",team[i].birth_place);
                             printf("%s\t\t",team[i].team_name);
                            printf("%d\t\t",team[i].bowling_rank);
                           printf("%d\n",team[i].all_rounder_rank);


                        }
                             printf("\n\tPress 1 to go back: ");
            scanf("%d",&a);
            if(a==1)
            {
                goto main;
            }
                    }
                }


                else if(key==5)
               {
                    system("cls");
                    system("color A");



                    printf("player_name: \tbirth_place:\t\t\tteam_name:\t\t\t\tbowling_rank:\t\t\t\tall_rounder_rank:\n\n");

                    for(i=0; i<50; i++)
                    {
                        if (team[i].all_rounder_rank<10)

                        {
                           printf ("%s\t\t",team[i].player_name);
                            printf("%s\t\t",team[i].birth_place);
                             printf("%s\t\t",team[i].team_name);
                            printf("%d\t\t",team[i].bowling_rank);
                           printf("%d\n",team[i].all_rounder_rank);


                        }
                             printf("\n\tPress 1 to go back: ");
            scanf("%d",&a);
            if(a==1)
            {
                goto main;
            }
                    }
                }

                else if(key==6)
                 {
                    system("cls");
                    system("color A");



                    printf("player_name: \tbirth_place:\t\t\tteam_name:\t\t\t\tbowling_rank:\t\t\t\tall_rounder_rank:\n\n");

                    for(i=0; i<50; i++)
                    {
                        if (team[i].all_rounder_rank<10)

                        {
                           printf ("%s\t\t",team[i].player_name);
                            printf("%s\t\t",team[i].birth_place);
                             printf("%s\t\t",team[i].team_name);
                            printf("%d\t\t",team[i].bowling_rank);
                           printf("%d\n",team[i].all_rounder_rank);


                        }
                             printf("\n\tPress 1 to go back: ");
            scanf("%d",&a);
            if(a==1)
            {
                goto main;
            }
                    }
                }

                else if(key==8)
                 {
                    system("cls");
                    system("color A");



                    printf("player_name: \tbirth_place:\t\t\tteam_name:\t\t\t\tbowling_rank:\t\t\t\tall_rounder_rank:\n\n");

                    for(i=0; i<50; i++)
                    {
                        if (team[i].all_rounder_rank<10)

                        {
                           printf ("%s\t\t",team[i].player_name);
                            printf("%s\t\t",team[i].birth_place);
                             printf("%s\t\t",team[i].team_name);
                            printf("%d\t\t",team[i].bowling_rank);
                           printf("%d\n",team[i].all_rounder_rank);


                        }
                             printf("\n\tPress 1 to go back: ");
            scanf("%d",&a);
            if(a==1)
            {
                goto main;
            }
                    }
                }
                else if(key==9)
               {
                    system("cls");
                    system("color A");



                    printf("player_name: \tbirth_place:\t\t\tteam_name:\t\t\t\tbowling_rank:\t\t\t\tall_rounder_rank:\n\n");

                    for(i=0; i<50; i++)
                    {
                        if (team[i].all_rounder_rank<10)

                        {
                           printf ("%s\t\t",team[i].player_name);
                            printf("%s\t\t",team[i].birth_place);
                             printf("%s\t\t",team[i].team_name);
                            printf("%d\t\t",team[i].bowling_rank);
                           printf("%d\n",team[i].all_rounder_rank);


                        }
                             printf("\n\tPress 1 to go back: ");
            scanf("%d",&a);
            if(a==1)
            {
                goto main;
            }
                    }
                }
                else if(key==10)
                 {
                    system("cls");
                    system("color A");



                    printf("player_name: \tbirth_place:\t\t\tteam_name:\t\t\t\tbowling_rank:\t\t\t\tall_rounder_rank:\n\n");

                    for(i=0; i<50; i++)
                    {
                        if (team[i].all_rounder_rank<10)

                        {
                           printf ("%s\t\t",team[i].player_name);
                            printf("%s\t\t",team[i].birth_place);
                             printf("%s\t\t",team[i].team_name);
                            printf("%d\t\t",team[i].bowling_rank);
                           printf("%d\n",team[i].all_rounder_rank);


                        }
                             printf("\n\tPress 1 to go back: ");
            scanf("%d",&a);
            if(a==1)
            {
                goto main;
            }
                    }
                }
                else if(key==11)

                 {
                    system("cls");
                    system("color A");



                    printf("player_name: \tbirth_place:\t\t\tteam_name:\t\t\t\tbowling_rank:\t\t\t\tall_rounder_rank:\n\n");

                    for(i=0; i<50; i++)
                    {
                        if (team[i].all_rounder_rank<10)

                        {
                           printf ("%s\t\t",team[i].player_name);
                            printf("%s\t\t",team[i].birth_place);
                             printf("%s\t\t",team[i].team_name);
                            printf("%d\t\t",team[i].bowling_rank);
                           printf("%d\n",team[i].all_rounder_rank);


                        }
                             printf("\n\tPress 1 to go back: ");
            scanf("%d",&a);
            if(a==1)
            {
                goto main;
            }
                    }
                }


                else if(key==20)
                {
                    break;
                }
            }
        }





    }


    fclose(fa);
    return 0;
}

