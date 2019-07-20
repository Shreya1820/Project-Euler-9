#include <stdio.h>

#include<math.h>

void main()
{
    int a,b,c,s=1000;
    
    for(a=0;a<=1000;a++)
    {
        for(b=0;b<=1000;b++)
        {  
          if(a<b)
            {
              c=s-a-b;
            }
            
            if((b<c) &&  pow(a,2)+pow(b,2)==pow(c,2))
            {
                printf("%d+%d+%d=%d\n",a,b,c,a+b+c);
                printf("abc=%d\n",a*b*c);
            }
        }
    }
}
