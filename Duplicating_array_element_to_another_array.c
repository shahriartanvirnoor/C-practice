#include <stdio.h>

int main()
{
    
    int d_ar[7];
    int m_ar[7]= {45, 67, 98,-34, -92,00,1};
    int i=0;
    printf("\nDuplicate array :d_ar[7]= ");
    for(i=0; i<7; i++){
        d_ar[i]=m_ar[i];
        printf(" %d ",d_ar[i]);
    }

    return 0;
}
