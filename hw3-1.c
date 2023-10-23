#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   scanf("%d",&n);
   int i;
   for(i=2;i<n;i++){
    if(n%i==0){
printf("NO");
break;
    }
    }
 if(n==i) {
printf("YES");
}


}
