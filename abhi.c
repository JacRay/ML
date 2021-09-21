#include<stdio.h>
int main(){
    int y1[10][10], y2[10][10],n,f = 0;
    scanf("%d", &n);
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d", &y1[i][j]);
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d", &y2[i][j]);
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(y1[i][j]>y2[i][j])
            {
                f = 1;

            }
            else{
                f= 0;
                break;
            }
        }
        if(f==0){
            f = 0;
            break;
        }
    }
    if(f==0){
        printf("NO");
    }
    else{
        printf("YES");
    }
}