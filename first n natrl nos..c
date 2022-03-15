#include <stdio.h>

int main() {
    int n,i=1;
    printf("enter the num n=");
    scanf("%d",&n);
    while(i<=n)
   { printf("%d\t",i);
   i++;
   }
    



    return 0;
}



OR

#include <stdio.h>

int main() {
    int n,i=1;
    printf("enter the num n=");
    scanf("%d",&n);
    while(i<=n)
   { printf("%d\t",i);
   i=i+1;
   }
    



    return 0;
}
