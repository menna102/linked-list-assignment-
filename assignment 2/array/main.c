#include <stdio.h>
# include <string.h>
# include <stdlib.h>
#include<time.h>
 int size;
int j; //counter for insertion at begin
int x=0;

struct student
       {
          char name [50];
          int day,month,year;
          int id;
          int grade ;
       } *tag;

void insertatBegin()

{
    tag=realloc(tag,(x+1)*sizeof(*tag));
    //check if it is the first insertion
     if (j==NULL)
     {

         printf("Enter the student name\n");
          fflush(stdin);
          scanf("%s",tag[x].name);
          printf("Enter the student birth DD\MM\YY\n");
          scanf("%d  %d  %d",&tag[x].day ,&tag[x].month,&tag[x].year);
          printf("Enter the student id\n");
          scanf("%d",&tag[x].id);
          printf("Enter the grade\n");
          fflush(stdin);
          scanf("%d",&tag[x].grade);
         j++;
     }
     else
        { //shift every element step to right
            for (int i=j;i>=0;i--)
        {
            tag[i+1].day=tag[i].day;

           tag[i+1].grade=tag[i].grade;
           tag[i+1].id=tag[i].id;
           tag[i+1].month=tag[i].month;
           strcpy(tag[i+1].name ,tag[i].name);
           tag[i+1].year=tag[i].year ;   }
           printf("Enter the student name\n");
          fflush(stdin);
          scanf("%s",tag[0].name);
          printf("Enter the student birth DD\MM\YY\n");
          scanf("%d  %d  %d",&tag[0].day ,&tag[0].month,&tag[0].year);
          printf("Enter the student id\n");
          scanf("%d",&tag[0].id);
          printf("Enter the grade\n");
          fflush(stdin);
          scanf("%d",&tag[0].grade);
         j++;

        }
        x++;
        }


void insertatEnd()
{
   tag=realloc(tag,(x+1)*sizeof(*tag));
    /* int p=0;
    for (int i=0;i<x;i++)
    {
        p++;
    };*/
    printf("Enter the student name\n");
          scanf("%s",tag[x].name);
          printf("Enter the student birth DD\MM\YY\n");
          scanf("%d  %d  %d",&tag[x].day ,&tag[x].month,&tag[x].year);
          printf("Enter the student id\n");
          scanf("%d",&tag[x].id);
          printf("Enter the grade\n");
          scanf("%d",&tag[x].grade);
          x++;

}
void insertatMiddle()
{
     tag=realloc(tag,(x+1)*sizeof(*tag));
     int p=((x%2)==0)?(x/2):((x+1)/2);
     printf(" the index  %d \n" ,p);
for (int i=p;i>=0;i--)
        {
            tag[i+1].day=tag[i].day;

           tag[i+1].grade=tag[i].grade;
           tag[i+1].id=tag[i].id;
           tag[i+1].month=tag[i].month;
           strcpy(tag[i+1].name ,tag[i].name);
           tag[i+1].year=tag[i].year ;   }


    printf("Enter the student name\n");

          scanf("%s",tag[p].name);
          printf("Enter the student birth DD\MM\YY\n");
          scanf("%d  %d  %d",&tag[p].day ,&tag[p].month,&tag[p].year);
          printf("Enter the student id\n");
          scanf("%d",&tag[p].id);
          printf("Enter the grade\n");
          scanf("%d",&tag[p].grade);
          x++;

}
void display( )
{
    for (int n = 0; n < x; n++ ) {
          printf ( "%s is %d %d %d , id is %d, grade is %d\n",
                tag [ n ].name, tag [ n ].day,tag [ n ].month,tag [ n ].year, tag [ n ].id, tag [ n ].grade);
       }
}

    int main ()
    {int i;
    float start;
    float finish;
    float timeellapse;
    struct student s;
    int sizeofstruct=sizeof(s);
    printf(" size of structure %d\n",&sizeofstruct);
    printf(" enter the number of student \n");
fflush(stdin);
scanf("%d",&size);


          struct student *tag=(struct student*) malloc(sizeof(*tag));
          do{
          printf("Enter the place to enter the student at the  \n  1- begin  2- middle 3- end  4- display \n ");
          scanf("%d",&i);
          switch(i)
          {
          case 1:
              start =clock();

            insertatBegin(tag,x);
            finish=clock();

         timeellapse= finish-start;
         printf("time taken by the insert at begin function  %f \n",timeellapse);
             break;
          case 2:
            start =clock();
            insertatMiddle(tag,x);
            finish=clock();
         timeellapse= finish-start;
         printf("time taken by the insert at middle function  %f \n",timeellapse);
            break;
          case 3:
                            start =clock();

        insertatEnd(tag,x);
         finish=clock();
         timeellapse= finish-start;
         printf("time taken by the insert at end function  %f \n",timeellapse);
            break;
          case 4:
            display ();
            break;

          }
          }
          while (1);


       return 0;

    }
