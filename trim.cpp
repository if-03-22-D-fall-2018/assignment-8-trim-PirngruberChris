/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
 #include "trim.h"
 #include <string.h>
 void 	trim (const char *source, char *trimmed_string){
   if (strcmp(source,"") == 0) {
     strcpy(trimmed_string,"");
   }
   else{
     int beginning_point = 0;
     int text_endpoint = strlen(source) - 1;
     int count = 0;

     while (source[beginning_point] == ' '){
        beginning_point++;
      }
      while(text_endpoint >= beginning_point && source[text_endpoint] == ' ')   {
        text_endpoint--;
      }
      for (int i = beginning_point; i <= text_endpoint; i++) {
        trimmed_string[count] = source[i];
        count++;
      }
   }
 }
