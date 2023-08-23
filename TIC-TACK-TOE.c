//Tick Tack Toe Game
#include<stdio.h>
int check(char ti[3][3],int a,int b)
{
  if (ti[a][b]=='O'||ti[a][b]=='X')
  {
    return 1;
  }
  else 
  return 0;
  
}
void line(int j)
{
   for(int i=0;i<j;i++)
   printf("-");
  //  printf("\n");
}
void prin(void)
{
  line(33);
       printf("*GAME OVER*"); 
        line(33);
}

void print(char ti[3][3])
{
  printf("\n");
    int i, j;
    for (i = 0; i < 3; i++)
    {
      printf("\t\t\t\t");
      line(13);
      //  printf("\n");
       printf("\n\t\t\t\t");
      for (j = 0; j < 3; j++)
       {
         printf("| %c ", ti[i][j]);
       }
       printf("|\n");

    }
    printf("\t\t\t\t");
    line(13);
   
}
int ee12(char ti[3][3])
{
   for(int i=0; i<3;i++)
    {
     
    if (ti[i][0]==ti[i][1]&&ti[i][1]==ti[i][2]&&ti[i][0]=='X')
    {
      prin();
       print(ti);
       return 5;
      
    }
        if (ti[i][0]==ti[i][1]&&ti[i][1]==ti[i][2]&&ti[i][0]=='O')
    {
     prin();
       print(ti);
        return 5;
       
    }
       if (ti[0][i]==ti[1][i]&&ti[1][i]==ti[2][i]&&ti[0][i]=='X')
    {
     prin();
       print(ti);
        return 5;
    }
        if (ti[0][i]==ti[1][i]&&ti[1][i]==ti[2][i]&&ti[0][i]=='O')
    {
      prin();
       print(ti);
        return 5;
    }
    }
     if (ti[0][0]==ti[1][1]&&ti[1][1]==ti[2][2]&&ti[1][1]=='O')
    {
      prin();
       print(ti);
        return 5;
    }
        if (ti[0][0]==ti[1][1]&&ti[1][1]==ti[2][2]&&ti[1][1]=='X')
    {
      prin();
       print(ti);
        return 5;
    }
         if (ti[0][2]==ti[1][1]&&ti[1][1]==ti[2][0]&&ti[1][1]=='O')
    {
      prin();
       print(ti);
        return 5;
    }
          if (ti[0][2]==ti[1][1]&&ti[1][1]==ti[2][0]&&ti[1][1]=='X')
    {
       prin();
       print(ti);
        return 5;
    }
    return 0;
}
void ge(char  ti[3][3])
{
   print(ti);
   int a=0, b=0, zz, qq,m;
    for (int i = 0; i < 4; i++)
    {
       
      printf("\nPLAYER A (X) enter the path\n");
      qq=1;
      while(qq==1)
      {
        zz=0;
      while ( zz!=3)
      {
     scanf("%d%d",&a,&b);
      if(a>2||b>2)
      {
      printf("Wrong PATH\n");
      printf("Enter Again\n");
      zz=2;
      }
      else
      zz=3;
      }
       printf("(%d,%d)\n",a,b);
      qq=check(ti,a,b);
      if (qq==1)
      {
        printf("WRONG\n");
        printf("Enter Again\n");
      }
      
      else
      {
     ti[a][b]='X';
     m=ee12(ti);
      if (m==5)
      {
        printf("\n\n");
        line(36);
         printf("(A WON)");
          line(36);
         return ;
      }
     print(ti);
      }
      
      }
     
       printf("\nPLAYER B (O) enter the path\n");
         qq=1;
      while(qq==1)
      {
        zz=0;
      while ( zz!=3)
      {
     scanf("%d%d",&a,&b);
      if(a>2||b>2)
      {
      printf("Wrong PATH\n");
      printf("Enter Again\n");
      zz=2;
      }
      else
      zz=3;
      }
         printf("(%d,%d)\n",a,b);
      qq=check(ti,a,b);
      if (qq==1)
      {
        printf("WRONG\n");
        printf("Enter Again\n");
      }
    else
      {
       ti[a][b]='O';
      m=ee12(ti);
   if (m==5)
      {
         printf("\n\n");
         line(36);
         printf("(B WON)");
          line(36);
         return ;
      }
      print(ti);
      }
      }
    }
     printf("\nPLAYER A (X) enter the path\n");
qq=1;
      while(qq==1)
      {
        zz=0;
      while ( zz!=3)
      {
     scanf("%d%d",&a,&b);
      if(a>2||b>2)
      {
      printf("Wrong PATH\n");
      printf("Enter Again\n");
      zz=2;
      }
      else
      zz=3;
      }
       printf("(%d,%d)\n",a,b);
      qq=check(ti,a,b);
      if (qq==1)
      {
        printf("WRONG\n");
        printf("Enter Again\n");
      }
      
      else
      {
     ti[a][b]='X';
     m=ee12(ti);
      if (m==5)
      {
        printf("\n\n");
        line(36);
         printf("(A WON)");
          line(36);
         return ;
      }
     print(ti);
      }}
      printf("\n");
       line(35);
    printf("[DRAW]");
       line(35);
  print(ti);
}

int main()
{
  int q=1;
    line(30);
    printf("*WELCOME*");
    line(30);
  for (int i = 0; i < 500; i++)
    {
   if (q==1)
    {
  char a =' ';
    char ti[3][3]={{a,a,a},{a,a,a},{a,a,a}};
     printf("\n\n");
   ge(ti);
  printf("\nPRESS 1 TO PLAY AGAIN\n");
    scanf("%d",&q);
    if (q==1)
    {
        line(32);
      printf("*[NEW GAME]*");
        line(32);
    }
    
}
    }
    line(33);
    printf("*[Thank you]*");
    line(33);
    
}
