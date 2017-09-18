#include <stdio.h>
#include <stdlib.h>

typedef struct arif
{
    char comm[12];

}s;

int one_digit(char *a,s *arr, int , int );
void check_number(char a[], int* i,int *j);
void two_digit(char *a, s *arr, int, int);

int main()
{
    printf("*****************HELLO, NICE TO MEET YOU.************************\n\n\n");
    while(1)
    {// system("cls");
    s arr[] = {"ZERO","ONE","TWO","THREE","FOUR", "FIVE","SIX", "SEVEN","EIGHT","NINE",\
    "TEN","ELEVEN","TWELVE","THIRTEEN","TEEN","FIFTEEEN","TWEN","THIR","FOR","FIF","TY",\
    " thousand "," million "," billion "," trillion "};

        system("color 8a");
    char a[15];
    int x,z,y,n;

    printf("\n\nEnter number to see the number in word.........       ");
    scanf("%s",a);
    check_number(a,&x,&z);
    printf("\n THE NUMBER IS   ");

        if(x == 0)
            printf(" ZERO ");
        if( x == 1)
            {
                one_digit(a,arr, z, x);
                printf("\n\n\n");
                exit(0);
            }
        if( x == 2 )
            {
        two_digit(a, arr, z,x);
        printf("\n\n\n");
        exit(0);
        }
        while( x > 0)
        {

            if( (x%3) == 0 )
        {
           n = one_digit(a,arr, z, x);
            if( n != 0 )
                printf(" hundred ");
            x--;
        two_digit(a, arr, z, x);
        x-= 2 ;
        }
        else
            {
                y = x;
            do{
               y = y - 3;
            }while(y >= 3);
             two_digit(a, arr, z,(x+2-y) );
             x = x-y;
            }
           if(((x % 3) == 0) && (x/3 > 0) && (n !=0) )
           {    y = (20 + x/3 );
               printf("%s",arr[y].comm);
               //printf(" x = %d ", x);
           }
        }
        printf("\n\n\n");
    }
return 0;

    }


void check_number(char a[], int* j,int *i)
{
    int k;
    for((*i) = 0; a[*i] != '\0'; (*i)++)
{
}
for((*j) = 0; a[(*j)] == '0'; (*j)++)
{
}
  *j = (*i) - (*j);
  for( k =0; k<(*j); k++ )
  {
      if(a[k] >= 48 && a[k] <= 57 ){}
      else{
         printf("\n This is not a valid input............\n\n");
        exit(9);
      }
  }

}

int one_digit(char *a,s *arr, int z, int c)
{
    int x;
    x =  (*(a+(z-c))) - 48;
    if(x > 0)
    printf("* %s  ",((arr+x)->comm));
    return x;
}

void two_digit(char *a, s *arr, int z, int c)
{
    int x;

    if(*(a+(z-c)) == '1')
    {
         x =  (*(a+(z-(c-1)))) - 48;
        if(x <= 3 || x == 5)
        {
            x = x+ 10;
            printf(" %s  ",((arr+x)->comm));
        }
        else {
                 printf(" %s%s ",((arr+x)->comm),((arr+14)->comm));
             }
}
    else
    {
         x =  (*(a+(z-c))) - 48;
        int p = (*(a+(z-(c-1)))) - 48;
        if(x > 1 && x < 6)
            {
             x += 14;
             }
             if(x > 0)
    printf(" %s",((arr+x)->comm));
    if(x > 0)
        printf("%s  ",((arr+20)->comm));
    if(p > 0)
        printf("%s",((arr+p)->comm));
    }
}
