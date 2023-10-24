#include <stdio.h>
#include <stdlib.h>
main()
{
int s1,d1,s2,d2,s3,d3;
scanf("%d%d%d%d%d%d",&s1,&d1,&s2,&d2,&s3,&d3);
if(d1==s2&&d2==s3||d2==s3&&d3==s1||d3==s1&&d1==s2||d1==s3&&d3==s2||d2==s1&&d1==s3||d3==s2&&d2==s1){
     printf("1");
    }
else if(s1!=d2!=d3||s2!=d3!=d1||s3!=d1!=d2){
     printf("3");
}
else{
     printf("2");
}
}
