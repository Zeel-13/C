#include<stdio.h>
struct address{
    int house;
    int block;
    char city[20];
    char state[20];
};
void printdata(struct address a);
int main()
{
    struct address adds[5];
    printf("enter the information of person 1: ");
    scanf("%d",&adds[0].house);
    scanf("%d",&adds[0].block);
    scanf("%s",adds[0].city);
    scanf("%s",adds[0].state);

    printf("enter the information of person 2: ");
    scanf("%d",&adds[1].house);
    scanf("%d",&adds[1].block);
    scanf("%s",adds[1].city);
    scanf("%s",adds[1].state);

    printf("enter the information of person 3: ");
    scanf("%d",&adds[2].house);
    scanf("%d",&adds[2].block);
    scanf("%s",adds[2].city);
    scanf("%s",adds[2].state);

    printf("enter the information of person 4: ");
    scanf("%d",&adds[3].house);
    scanf("%d",&adds[3].block);
    scanf("%s",adds[3].city);
    scanf("%s",adds[3].state);

    printf("enter the information of person 5: ");
    scanf("%d",&adds[4].house);
    scanf("%d",&adds[4].block);
    scanf("%s",adds[4].city);
    scanf("%s",adds[4].state);

    printdata(adds[0]);
    printdata(adds[1]);
    printdata(adds[2]);
    printdata(adds[3]);
    printdata(adds[4]);
}
void printdata(struct address a)
{
    printf("the address is: %d, %d, %s, %s\n",a.house,a.block,a.city,a.state);
}