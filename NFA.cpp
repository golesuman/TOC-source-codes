#include<stdio.h> 
#include<conio.h> 
int Fa[10][10][10],states[2][10],curr,row=0,col=0,sr=0,sc=0,th=0,in; 
char *str; 
int nfa(char *string,int state) 
 { 
    int i,j; 
    for(i=0;i<=row;i++) 
         { 
           if(*string) 
               { 
            curr=Fa[state][*string-97][i]; 

              if (curr==-1) 
                break; 
              if(nfa(string+1,curr)) 
                return 1; 
               } 
            else 
               { 
               if(states[1][i]==-1) 
              break; 
               if(state==states[1][i]) 
              return 1; 
               } 
           } 
           return 0; 
      } 
int main() 
  { 
     FILE *fp; 
     int i,j,k,flag=0; 
     char c,ch; 
//     clrscr(); 
     fp=fopen("Nfa_ip.txt","r"); 

     for(i=0;i<2;i++) 
       for(j=0;j<10;j++) 
     states[i][j]=-1; 

     for(i=0;i<10;i++) 
       for(j=0;j<10;j++) 
      for(k=0;k<10;k++) 
          Fa[i][j][k]=-1; 

     while(fscanf(fp,"%d",&in)!=EOF) 
       { 
       fscanf(fp,"%c",&c); 

        if(flag) 
          { 
         states[sr][sc++]=in; 
         if(c=='\n') 
            { 
              sr++; 
              sc=0; 
            } 
          } 
        else if(c=='#') 
          { 
         flag=1; 
         Fa[row][col][th]=in; 
         printf("\nFa[%d][%d][%d]=%d",row,col,th,Fa[row][col][th]); 

          } 
         else if(!flag) 
          { 
         Fa[row][col][th]=in; 
         printf("\nFa[%d][%d][%d]=%d",row,col,th,Fa[row][col][th]); 
         if(c==',') 
           { 
             th++; 
           } 
         else if(c=='\n') 
           { 
              col=0; 
              row++; 
              th=0; 
          } 
        else if(c!=',') 
         { 
             col++; 
             th=0; 
          } 
          } 

      } 

      printf("\n\nEnter the string : \n"); 
      scanf("%s",str); 

      if(nfa(str,states[0][0])) 
    printf("\nString Is Accepted"); 
       else 
    printf("\nString Not Accepted"); 
     getch(); 

     return 0; 
  } 
