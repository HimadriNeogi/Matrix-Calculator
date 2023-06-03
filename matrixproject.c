#include<stdio.h>
#include<stdlib.h>
void main()
{
    int choice;
    int arr[100][100],transpose[100][100],a[100][100],b[100][100],res[100][100],i,j,k,m,n,p,q,temp;
    printf("PRESS 1 TO DISPLAY THE MATRIX\n");
    printf("PRESS 2 TO DISPLAY TRANSPOSE OF THE MATRIX\n");
    printf("PRESS 3 TO ROTATE THE MATRIX BY 90 DEGREES CLOCKWISE AND DISPLAY IT\n");
    printf("PRESS 4 TO DISPLAY THE MATRIX IN WAVE PATTERN\n");
    printf("PRESS 5 TO DISPLAY THE SUM OF TWO MATRICES\n");
    printf("PRESS 6 TO DISPLAY THE PRODUCT OF TWO MATRICES\n");
    printf("PRESS 0 TO EXIT\n");

    while(1)
    {
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter number of rows and columns: ");
            scanf("%d%d",&m,&n);
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("Enter values of matrix[%d][%d]:",i,j);
                    scanf("%d",&arr[i][j]);
                }
            }
            printf("the matrix is:\n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d\t",arr[i][j]);
                }
                printf("\n");
            }
            break;

            case 2:
            printf("Enter number of rows and columns: ");
            scanf("%d%d",&m,&n);
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("Enter values of matrix[%d][%d]:",i,j);
                    scanf("%d",&arr[i][j]);
                }
            }
            printf("the matrix is:\n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d\t",arr[i][j]);
                }
                printf("\n");
            }
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    transpose[j][i]=arr[i][j];
                }
            }
            printf("\nTranspose of the matrix:\n");
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    printf("%d\t",transpose[i][j]);
                }
                printf("\n");
            }
            break;

            case 3:
            printf("Enter number of rows and columns: ");
            scanf("%d%d",&m,&n);
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("Enter values of matrix[%d][%d]:",i,j);
                    scanf("%d",&arr[i][j]);
                }
            }
            printf("the matrix is:\n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d\t",arr[i][j]);
                }
                printf("\n");
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<=i;j++)
                {
                    temp=arr[i][j];
                    arr[i][j]=arr[j][i];
                    arr[j][i]=temp;
                }
            }
            if(m==n)
            {
                for(i=0;i<m;i++)
                {
                    int j=0,k=n-1,temp;
                    while(j<k)
                    {
                        temp=arr[i][j];
                        arr[i][j]=arr[i][k];
                        arr[i][k]=temp;
                        j++;
                        k--;
                    }
                }
                printf("\nThe 90 degrees rotated matrix is:\n");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        printf("%d\t",arr[i][j]);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("Rotation is not possible");
            }
            break;

            case 4:
            printf("Enter number of rows and columns: ");
            scanf("%d%d",&m,&n);
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("Enter values of matrix[%d][%d]:",i,j);
                    scanf("%d",&arr[i][j]);
                }
            }
            printf("the matrix is:\n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d\t",arr[i][j]);
                }
                printf("\n");
            }
            for(i=0;i<m;i++)
            {
                if(i%2!=0)
                { 
                    int j=0,k=n-1,temp;
                    while(j<k)
                    {
                        temp=arr[i][j];
                        arr[i][j]=arr[i][k];
                        arr[i][k]=temp;
                        j++;
                        k--;
                    }
                }
            }
            printf("\nThe wave pattern of matrix is:\n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d\t",arr[i][j]);
                }
                printf("\n");
            }
            break;

            case 5:
            printf("Enter number of rows and columns of first matrix: ");
            scanf("%d%d",&m,&n);
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("enter values of array[%d][%d]:",i,j);
                    scanf("%d",&a[i][j]);
                }
            }
            printf("Enter number of rows and columns of second matrix: ");
            scanf("%d%d",&p,&q);
            for(i=0;i<p;i++)
            {
                for(j=0;j<q;j++)
                {
                    printf("enter values of array[%d][%d]:",i,j);
                    scanf("%d",&b[i][j]);
                }
            }
            if(m==p&&n==q)
            {
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        res[i][j]=a[i][j]+b[i][j];
                    }
                }
                printf("Addition of two matrices:\n");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        printf("%d\t",res[i][j]);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("Two matrices cannot be added");
            }
            break;

            case 6:
            printf("Enter number of rows and columns of first matrix: ");
            scanf("%d%d",&m,&n);
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("enter values of array[%d][%d]:",i,j);
                    scanf("%d",&a[i][j]);
                }
            }
            printf("Enter number of rows and columns of second matrix: ");
            scanf("%d%d",&p,&q);
            for(i=0;i<p;i++)
            {
                for(j=0;j<q;j++)
                {
                    printf("enter values of array[%d][%d]:",i,j);
                    scanf("%d",&b[i][j]);
                }
            }
            if(n!=p)
            printf("Matrix multiplication is not possible");
            else
            {
                int res[m][q];
                for(i=0;i<m;i++)
                {
                    for(j=0;j<q;j++)
                    {
                        res[i][j]=0;
                        for(k=0;k<n;k++)
                        res[i][j]+=a[i][k]*b[k][j];
                    }
                    printf("\n");
                }
                printf("The product of two matrices is:\n");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<q;j++)
                    {
                        printf("%d\t",res[i][j]);
                    }
                    printf("\n");
                }
            }
            break;

            case 0:
            printf("\nTHANK YOU!");
            exit(0);
            
            default:
            printf("\nWrong Input!");
        }
    }
}