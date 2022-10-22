// Print the missing letters in a array while traversing:

#include <stdio.h>

int main() {

    int a,min,max,val,cc;
    printf("Enter number of elements: ");
    scanf("%d",&a);
    int ar[a], br[a],cr[a],i,j,mima[a];
    for(i=0;i<a;i++){
        printf("Enter the %d element: ",i);
        scanf("%d",&ar[i]);
    }

    // Creating the duplicates
    for(i=0;i<a;i++){
        br[i]=ar[i];
        cr[i]=ar[i];
    }

    // Minimum and Maximum
    for(i=0;i<a;i++){
        if(br[0]>br[i])
            br[0]=br[i];

        if(cr[0]<cr[i])
            cr[0]=cr[i];
    }

    min=br[0];
    max=cr[0];
    val=max-min+1;

    // Traversing all element
    for(j=0,i=min;j<val,i<=max;j++,i++){
        mima[j]=i;
    }
    int full[val+a];

    // Merge array and traverse array
    for (i = 0; i < a; i++)
        full[i] = ar[i];

    for (i = 0, j = a;j < (val+a) && i < val; i++, j++)
        full[j] = mima[i];


    // Find the missing element
    for(i=0;i<(val+a);i++){
        int ctr=0,cc=0;
        for(j=0;j<(val+a);j++){
            if(i!=j){
                if(full[i]==full[j])
                    ctr++;
            }
        }
        if(ctr==0){
            printf("full=%d\n",full[i]);
            cc++;
        }
    }
    // No element is missing print " -1 "
    if(cc==0)
        printf("-1");
}
