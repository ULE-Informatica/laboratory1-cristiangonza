/**
 *  
 * The student needs to compile, test and comment the source code file.
 * 
 * Enumerate those Rules and Recommendation associated that are broken in the previous source code file.
 * Enumerate he compilation tools and paramenters (gcc vs g++), -Wall ...
 * Enumerate the standard associated  -std=c99, -std=c11
 * 
 * There are several variants. You should choose at least two.
 * At the end the source code  should compile without warnings to the variant selected (you can remove/change instructions).
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h> //Añadimos el include para los punteros


char array1[] = "Foo" "bar"; /*STR32-C*/
char array2[] = { 'F', 'o', 'o', 'b', 'a', 'r', '\0' };	/*Incumple la regla ARR02-C STR32-C*/
 
enum { BUFFER_MAX_SIZE = 1024 };

const char* s1 = "foo(HelloWorld)foo";
const char* s2 = "\nHello\nWorld\n";

void gets_example_func(void) {
  
  char buf[BUFFER_MAX_SIZE];	/*STR11-C*/
 
  if (fgets(buf, sizeof(buf), stdin) == NULL) {
	/*return 1; No retorna nada, se trata de una función void*/
  }
  buf[strlen(buf) - 1] = '\0';
}

const char *get_dirname(const char *pathname) {
  char *slash;
  slash = (char*)malloc(sizeof(strrchr(pathname, '/'))); /*Asignación de memoria del puntero*/
  if (slash) {
    *slash = '\0'; /* Undefined behavior */
  }
  return pathname;
}
 

void get_y_or_n(void) {  
	/*STR11-C*/
	/* char response[8]; ARR32-C Reserva mas memoria de la que necesita */
  char value;
	printf("Continue? [y] n: ");  
	/* STR31-C */
	/* gets(response); MSC34-C deprecated */

  scanf("%c", &value);

	if (value == 'n') 
		exit(0);  

	return;
}

 
int main(int argc, char *argv[])
{
    /* En primer lugar comprobamos el numero de argumentos introducidos */

    if (argc != 3){
      printf("Numero de argumentos introducidos invalido\n");
      return -1;
    }

    char key[24];	/*STR11-C*/
    char response[8];	/*STR11-C*/
    char array3[16];	/*STR11-C*/
    char array4[16];	/*STR11-C*/
    char array5 []  = "01234567890123456";	/* MEM35-C */
    /* MEM32-C */
    char *ptr_char = (char*)malloc(sizeof(char));
    strcpy(ptr_char, "new string literal");
    /* No se utilizan */
   /* size_t size_array1 = strlen("аналитик"); */
   /* size_t size_array2 = 100; */
    
   // char analitic1[size_array1]="аналитик";
   // char analitic2[size_array2]="аналитик";
   /* char analitic3[100]="аналитик"; */	/*STR11-C*/

    puts(get_dirname(__FILE__));

        
    strcpy(key, argv[1]);
    strcat(key, " = ");  
    strcat(key, argv[2]);


    fgets(response,sizeof(response),stdin);

    get_y_or_n();

    printf ("%s",array1);
    printf ("\n");
    printf ("%s",array2);
    printf ("\n");
 
    puts (s1);
    printf ("\n");
    puts (s2);
    printf ("\n");
    
    strncpy(array3, array5, sizeof(array3));  
    strncpy(array4, array3, strlen(array3));
    
    array5 [0] = 'M';
    *ptr_char= 'N';
    
    array3[sizeof(array3)-1]='\0';
    
    
    return 0;
}
