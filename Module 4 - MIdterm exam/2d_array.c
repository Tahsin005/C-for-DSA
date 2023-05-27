#include<stdio.h>
void print_2D_array(int a[][3],int r,int c);

int main(){
    // int a[3][3];
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // int a[3][3]={1,2,3,4,5,6,7,8,9};

    // printing without loop
    printf("%d\n",a[0][0]);
    printf("%d\n",a[0][1]);
    printf("%d\n",a[0][2]);
    printf("%d\n",a[1][0]);
    printf("%d\n",a[1][1]);
    printf("%d\n",a[1][2]);
    printf("%d\n",a[2][0]);
    printf("%d\n",a[2][1]);
    printf("%d\n",a[2][2]);
    int r=3,c=3;
    // // 2D array input using loop
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    // 2D array print using loop
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    print_2D_array(a,r,c);
    return 0;
}
void print_2D_array(int a[][3],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}