#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

struct book
{
    char *name;
    char *writer;
    int ISBN;
    int yearofrelease;
    int price;

};


 struct shelf
 {
     char *genre;
     int capacity;
     int currentcapacity;
          struct book books[6];
 };


struct library
{
    char* name;
    int capacity;
        struct shelf shelves[6];
}lib1,lib2;



void addbook();
void dispstockedbooks();



int main()
{


  struct library;
  lib1.name="ketabkhane aval";
  lib1.capacity=5;
  // first shell of first lib
   lib1.shelves[1].genre="horror";
   lib1.shelves[1].capacity=5;
   lib1.shelves[1].currentcapacity=4;
   lib1.shelves[1].books[1].name="the exorcist";
   lib1.shelves[1].books[1].writer="william peter";
   lib1.shelves[1].books[1].yearofrelease=1971;
   lib1.shelves[1].books[1].ISBN=401;
   lib1.shelves[1].books[1].price=20;
   // second shell of first lib
   lib1.shelves[2].genre="love";
   lib1.shelves[2].capacity=5;
   lib1.shelves[2].currentcapacity=4;
   lib1.shelves[2].books[1].name="the graham effect";
   lib1.shelves[2].books[1].writer="elle kennedy";
   lib1.shelves[2].books[1].yearofrelease=2023;
   lib1.shelves[2].books[1].ISBN=705;
   lib1.shelves[2].books[1].price=25;
   //third shell of first lib
   lib1.shelves[3].genre="history";
   lib1.shelves[3].capacity=5;
   lib1.shelves[3].currentcapacity=4;
   lib1.shelves[3].books[1].name="mein kampf";
   lib1.shelves[3].books[1].writer="adolf hitle";
   lib1.shelves[3].books[1].yearofrelease=1944;
   lib1.shelves[3].books[1].ISBN=890;
   lib1.shelves[3].books[1].price=50;
   //fourth shell of first lib
   lib1.shelves[4].genre="romantic";
   lib1.shelves[4].capacity=5;
   lib1.shelves[4].currentcapacity=5;
   //fifth shell of first lib
   lib1.shelves[5].genre="math";
   lib1.shelves[5].capacity=5;
   lib1.shelves[5].currentcapacity=5;
   //end of first lib


  lib2.name="ketabkhane dovom";
  lib2.capacity=5;
  // first shell of second lib
  lib2.shelves[1].genre="horror";
  lib2.shelves[1].capacity=5;
  lib2.shelves[1].currentcapacity=4;
  lib2.shelves[1].books[1].name="it";
  lib2.shelves[1].books[1].writer="stephen king";
  lib2.shelves[1].books[1].yearofrelease=1986;
   lib2.shelves[1].books[1].ISBN=409;
   lib2.shelves[1].books[1].price=70;
   // second shell of second lib
   lib2.shelves[2].genre="love";
   lib2.shelves[2].capacity=5;
   lib2.shelves[2].currentcapacity=4;
   lib2.shelves[2].books[1].name="twisted hate";
   lib2.shelves[2].books[1].writer="ana huang";
   lib2.shelves[2].books[1].yearofrelease=2022;
   lib2.shelves[2].books[1].ISBN=626;
   lib2.shelves[2].books[1].price=30;
   //third shell of second lib
   lib2.shelves[3].genre="history";
   lib2.shelves[3].capacity=5;
   lib2.shelves[3].currentcapacity=4;
   lib2.shelves[3].books[1].name="the rise and fall of third reich";
   lib2.shelves[3].books[1].writer="william shirer";
   lib2.shelves[3].books[1].yearofrelease=1960;
   lib2.shelves[3].books[1].ISBN=125;
   lib2.shelves[3].books[1].price=13;
   //fourth shell of second lib
   lib2.shelves[4].genre="romantic";
   lib2.shelves[4].capacity=5;
   lib2.shelves[4].currentcapacity=5;
   //fifth shell of second lib
   lib2.shelves[5].genre="math";
   lib2.shelves[5].capacity=5;
   lib2.shelves[5].currentcapacity=5;
   //end of second lib



printf("welcome to danial library\n");
printf("please select your action:\n\n");
printf("main menu\n");
printf("1. add book\n");
printf("2. search book\n");
printf("3. delete book\n");
printf("4. display stocked books\n");
printf("5. assign book to library\n");
printf("6. sell book\n");
printf("7. view sold books history\n");
printf("8. save current data\n");
printf("9. exit\n");
int n;



do
{
   scanf("%d",&n);


  switch(n)
    {
     case 1:
     addbook();
     break;

     case 2:

     break;

     case 3:

     break;

     case 4:
     dispstockedbooks();
     break;

     case 5:

     break;

     case 6:

     break;

     case 7:

     break;

     case 8:

     break;
    }

}while(n != 9);





    return 0;
}
void addbook()
{
    char name[200];
    char author[200];
    int pric;
    int isb;
    int yearofreleas;
    printf("please enter requested info: \n");
    printf("name: ");
    fgets(name,200,stdin);
     printf("author: ");
    fgets(author,200,stdin);
     printf("price: ");
    scanf("%d",&pric);
     printf("isbn: ");
    scanf("%d",&isb);
    printf("year of relese :");
    scanf("%d",&yearofreleas);

     int i=1,j=1;
     int flag=0;

    while(i<6)
    { j=1;
          while(j<6)
         {
            if(lib1.shelves[i].books[j].price == 0)
            {
              lib1.shelves[i].books[j].name=name;
              lib1.shelves[i].books[j].writer=author;
              lib1.shelves[i].books[j].ISBN=isb;
              lib1.shelves[i].books[j].price=pric;
              lib1.shelves[i].books[j].yearofrelease=yearofreleas;
              flag=1;
              break;
            }
           else
            {
            j++;
            }

         }
         if(flag==1)
         {
             break;
         }

       i++;
    }


   if(flag==0)
    {
        while(i<6)
     {  j=1;
           while(j<6)
          {
             if(lib2.shelves[i].books[j].price == 0)
             {
              lib2.shelves[i].books[j].name=name;
              lib2.shelves[i].books[j].writer=author;
              lib2.shelves[i].books[j].ISBN=isb;
              lib2.shelves[i].books[j].price=pric;
              lib2.shelves[i].books[j].yearofrelease=yearofreleas;
              flag=flag+2;
              break;
             }
            else
             {
             j++;
             }

          }
          if(flag==2)
         {
             break;
         }
       i++;

      }

   }



}


void dispstockedbooks()
{
    for(int i=1;i<6;i++)
    {
        for( int j=1;j<6;j++)
        {
            printf("%d,%d.%s  ",i,j,lib1.shelves[i].books[j].name);
            putchar('\n');
        }
    }
    for(int i=1;i<6;i++)
    {
        for( int j=1;j<6;j++)
        {
            printf("%d,%d.%s  ",i,j,lib2.shelves[i].books[j].name);
            putchar('\n');
        }

    }
}


