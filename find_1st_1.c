//Author:DEADPOOL
//User@DEADPOOL
//Device name:LAPTOP-MGJPSU5N
//***************************
#include<stdio.h>

int binary_search_first_one(int *array,int start,int end){
    int mid;
    while (start <= end){
        mid = (start+end)/2;

        if (array[mid] == 1 && (mid == 0 || array[mid - 1] == 0))
            break;
        else if (array[mid]==1)
            end = mid - 1;
        else
            start = mid +1;
    }
    return mid;
}


int find_first_one( int *array){
    int start = 0,end = 1,pos;

    while (array[end]==0){
        start = end;
        end = 2*end;
    }
    pos = binary_search_first_one(array,start,end);
    return pos;
}



int main(){
    int x,n0,n1;
    printf(" \n enter the number of 0's : ");
    scanf("%d",&n0);
    printf(" \n enter the number of 1's : ");
    scanf("%d",&n1);
    int array[n0+n1];
    for (int i= 0;i<n0;i++)
        array[i]=0;
    for (int i= n0;i<(n0+n1);i++)
        array[i]=1;
    x = find_first_one(array);
    printf("\n %d is the position of 1st '1' and index is %d \n\n\n",x+1,x);
return 0;
}
