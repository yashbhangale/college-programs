#include<stdio.h>
struct book
{
    char title[30],author[30];
    float price;
};
int main()

{
       struct  book b[5];
         int i,j;
         for(i=0;i<5;i++)
         {
           printf("enter the title,author and price of book %d\n",i+1);
             scanf("%s%s%f",b[i].title,b[i].author,&b[i].price);
         }
       {
        for(i=1;i<5;i++)
        {
            for(j=0;j<5-i;j++)
            {
                if(b[j].price>b[j+1].price)
                {
                    
                    struct book temp;
                    temp=b[j];
                    b[j]=b[j+1];
                    b[j+1]=temp;
                }
            }
        }
        printf("\nSorted List=\n");
        for(i=0;i<5;i++)
        {
            printf("%s\t%s\t%f\n",b[i].title,b[i].author,b[i].price);
        }
        return 0;
       }
}
