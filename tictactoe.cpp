#include<stdio.h>
#include<conio.h>
char box[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
void board(char a[20],char b[20])
{
    printf("\n\tTic Tac Toe\n\n");
    printf(" %s-(X)  -   %s-(O)\n\n\n",a,b);


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", box[1], box[2], box[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", box[4], box[5], box[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", box[7], box[8], box[9]);

    printf("     |     |     \n\n");
}
int win()
{
    if (box[1] == box[2] && box[2] == box[3])
        return 1;
        
    else if (box[4] == box[5] && box[5] == box[6])
        return 1;
        
    else if (box[7] == box[8] && box[8] == box[9])
        return 1;
        
    else if (box[1] == box[4] && box[4] == box[7])
        return 1;
        
    else if (box[2] == box[5] && box[5] == box[8])
        return 1;
        
    else if (box[3] == box[6] && box[6] == box[9])
        return 1;
        
    else if (box[1] == box[5] && box[5] == box[9])
        return 1;
        
    else if (box[3] == box[5] && box[5] == box[7])
        return 1;
        
    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' &&
        box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] 
        != '7' && box[8] != '8' && box[9] != '9')
        return 0;
    else
        return -1;
}
int main()
{
    int p=1,i,c;
    char mark,a[20],b[20];
    printf("enter name of player 1:");
    gets(a);
	printf("enter name of player 2:");
	gets(b);
    do
    {
        board(a,b);
        if(p%2==1)
        p=1;
        else
        p=2;
        if(p==1)
        {
        printf(" %s, enter a number:  ",a);
        scanf("%d", &c);
        }
        else
        {
        	printf(" %s, enter a number:  ",b);
            scanf("%d", &c);	
		}
        if(p==1)
		{ 
		mark='X';
		}
		else
		{
		mark='O';
		}
        if (c == 1 && box[1] == '1')
            box[1] = mark;            
        else if (c == 2 && box[2] == '2')
            box[2] = mark;
        else if (c == 3 && box[3] == '3')
            box[3] = mark;
        else if (c == 4 && box[4] == '4')
            box[4] = mark;
        else if (c == 5 && box[5] == '5')
            box[5] = mark;
        else if (c == 6 && box[6] == '6')
            box[6] = mark;
        else if (c == 7 && box[7] == '7')
            box[7] = mark;
        else if (c == 8 && box[8] == '8')
            box[8] = mark;            
        else if (c == 9 && box[9] == '9')
            box[9] = mark;       
        else
        {
            printf("Invalid move ");
            p--;
        }
        i = win();
        p++;
    }while (i==- 1);  
    board(a,b);  
    	if (i==1)
    	{
    	p--;
    	if(p==1)
    	{
        printf(" %s win ",a);
    	}
        else
        {	
        printf(" %s win ",b);
    	}
    	}
        else
        {
        printf("   Game draw");
		}
    getch();
    return 0;
}
