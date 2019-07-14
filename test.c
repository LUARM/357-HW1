#include <stdio.h>
#include <unistd.h> 
#include <string.h>
#include <stdlib.h>
#include "mytr_help.h"
#include <ctype.h>

int main(int argc , char * argv[])
{   
	int i= 0, j = 0, k = 0, size = 0;
	char buf[1024];
	char *s1, *s2, *ptr;
	

	if(argc < 2)
	{
		fprintf( stderr, "not enough arguments\n");
		return 0;
	}
    switch(argv[1][1])
    {
	    case 'd':
	    if ((argc >= 3) && (argc <= 3))
	    {
	    
	    	if(stdin != NULL)
	    	{
	    		while((buf[i++]=fgetc(stdin)) != EOF); 
                fclose(stdin);

	    	}
	    	else
	    	{
	    		fprintf(stderr,"File does not exist\n");
	    	}
	    	ptr = strchr(buf, '\n');
	    	if (ptr != NULL) {
                *ptr = '\0';
                
        
            }
	    	size = i;
            s2 = malloc(strlen(argv[2]) + 1);
	    	escaped_string_to_c_string(argv[2], s2);/* look at this */

            for(i=0; s2[i]; i++)
            {
            	for(j=0; j<size; j++)
            	{
            		if(buf[j] == s2[i])
            		{
            			for(k=j; k<size; k++)
            			{
            			 
            		        buf[k]=buf[k+1];
            		      
            			}
            		}

            	}

            }
            if(stdout != NULL)   	
            {   

                
            	fprintf(stdout, buf);
            	fclose(stdout);

            }
            else
            {
            	fprintf(stderr,"File can not open for write\n");
            }

	    }
	    else
	    {
	      fprintf(stderr,"must have one set of characters\n");	 

	    }
	    break;
	 
	    
		default: 
	    if ((argc >= 3) && (argc <= 3))
	    {
	        if(stdin != NULL)
	        {
	        	while((buf[i++]=fgetc(stdin)) != EOF);
	            fclose(stdin);

	        }
	        else
	        {
	        	fprintf(stderr,"File does not exist\n");

	        }
	        ptr = strchr(buf, '\n');
	    	if (ptr != NULL) {
                *ptr = '\0';
                
        
            }
	        size = i;
	        s1 = malloc(strlen(argv[1]) + 1);
	        escaped_string_to_c_string(argv[1], s1);/* look at this */

	        for(i=0; s1[i]; i++)
	        {
	        	for(j=0; j<size; j++)
	        	{
	        		if(buf[j] == s1[i])
	        		{
	        			buf[j] = argv[2][i];
	        		}	
	            }
	        }			
			if(stdout != NULL)
			{
			
				fputs(buf,stdout);
				fclose(stdout);

			}
			else
			{
				fprintf(stderr,"File can not open for write\n");
			}
			
	    }
	    else
	       {
	       	fprintf(stderr,"incorrect set number\n");
	       }
	       break;       
	    }
	    return 0;

 } 




