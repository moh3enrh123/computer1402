
#include <stdio.h>
int main() {
int i=0,n,j=0;
printf("Enter the number of rows: ");
scanf("%d",&n);

for(i=1;i<=n;i++){

for(j=1;j<=i;j++){

printf("%d",j);

}

printf("\n");
}
}
