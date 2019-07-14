#include <stdio.h>
#include "mytr_help.h"

void escapedChar(char *prechar, char *postchar) 
{
     while (*prechar) 
     {

      if (*prechar == '\\') 
      {
           ++prechar;
        
	      if(*prechar == '\\')
	      {
	        *postchar ='\\'; 
	        break;
	      }   
	      if(*prechar == 'n')
	      {
	      	 
	      	 *postchar = '\n'; 
	      	 break;
	      }  
	      if(*prechar == 't')
	      {
	         *postchar = '\t';
	         break;
	      }
	      if (*prechar == 'v')
	      {
	      	 *postchar = '\v';
	         break;
	      }
	      else
	      {
            *postchar = *prechar; 
            break;
	      } 
      
      }
      else 
      {
           *postchar = *prechar;
      }
      ++postchar;
      
      if (*prechar != 0)
          
           ++prechar;
  }

}




