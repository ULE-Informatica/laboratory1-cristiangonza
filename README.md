# dps-lab-1
Laboratory 1

## Priemra compilación: 
### **$ gcc -Wall exampleStrings.c**

```bash
exampleStrings.c: In function ‘gets_example_func’:
exampleStrings.c:32:16: warning: ‘return’ with a value, in function returning void [-Wreturn-type]
   32 |         return 1;
      |                ^
exampleStrings.c:28:6: note: declared here
   28 | void gets_example_func(void) {
      |      ^~~~~~~~~~~~~~~~~
exampleStrings.c: In function ‘get_y_or_n’:
exampleStrings.c:51:2: warning: implicit declaration of function ‘gets’; did you mean ‘fgets’? [-Wimplicit-function-declaration]
   51 |  gets(response);
      |  ^~~~
      |  fgets
exampleStrings.c: In function ‘main’:
exampleStrings.c:73:10: warning: unused variable ‘analitic3’ [-Wunused-variable]
   73 |     char analitic3[100]="аналитик";
      |          ^~~~~~~~~
exampleStrings.c:69:9: warning: unused variable ‘size_array2’ [-Wunused-variable]
   69 |     int size_array2 = 100;
      |         ^~~~~~~~~~~
exampleStrings.c:68:9: warning: unused variable ‘size_array1’ [-Wunused-variable]
   68 |     int size_array1 = strlen("аналитик");
      |         ^~~~~~~~~~~
/usr/bin/ld: /tmp/ccigm9gN.o: en la función `get_y_or_n':
exampleStrings.c:(.text+0xe4): aviso: the `gets' function is dangerous and should not be used.
```

## Comparación entre parámetros de compilación y estándares:

Antes de realizar cualquier corrección en el código, comprobamos las distintas salidas que nos indican los dos parámetros de compilación (gcc y g++) y los dos estándares distintos (-std=c99 y -std=c11).

### gcc con el estandar c99:
#### **$ gcc -Wall exampleStrings.c -std=c99**

```bash
exampleStrings.c:22:19: warning: missing terminating " character
   22 | const char* s1 = R"foo(
      |                   ^
exampleStrings.c:22:19: error: missing terminating " character
   22 | const char* s1 = R"foo(
      |                   ^~~~~
exampleStrings.c:22:18: error: ‘R’ undeclared here (not in a function)
   22 | const char* s1 = R"foo(
      |                  ^
exampleStrings.c:23:1: error: expected ‘,’ or ‘;’ before ‘Hello’
   23 | Hello
      | ^~~~~
exampleStrings.c:25:5: warning: missing terminating " character
   25 | )foo";
      |     ^
exampleStrings.c:25:5: error: missing terminating " character
   25 | )foo";
      |     ^~
exampleStrings.c: In function ‘gets_example_func’:
exampleStrings.c:32:16: warning: ‘return’ with a value, in function returning void [-Wreturn-type]
   32 |         return 1;
      |                ^
exampleStrings.c:28:6: note: declared here
   28 | void gets_example_func(void) {
      |      ^~~~~~~~~~~~~~~~~
exampleStrings.c: In function ‘get_y_or_n’:
exampleStrings.c:51:2: warning: ‘gets’ is deprecated [-Wdeprecated-declarations]
   51 |  gets(response);
      |  ^~~~
In file included from exampleStrings.c:13:
/usr/include/stdio.h:577:14: note: declared here
  577 | extern char *gets (char *__s) __wur __attribute_deprecated__;
      |              ^~~~
exampleStrings.c: In function ‘main’:
exampleStrings.c:94:11: error: ‘s2’ undeclared (first use in this function); did you mean ‘s1’?
   94 |     puts (s2);
      |           ^~
      |           s1
exampleStrings.c:94:11: note: each undeclared identifier is reported only once for each function it appears in
exampleStrings.c:73:10: warning: unused variable ‘analitic3’ [-Wunused-variable]
   73 |     char analitic3[100]="аналитик";
      |          ^~~~~~~~~
exampleStrings.c:69:9: warning: unused variable ‘size_array2’ [-Wunused-variable]
   69 |     int size_array2 = 100;
      |         ^~~~~~~~~~~
exampleStrings.c:68:9: warning: unused variable ‘size_array1’ [-Wunused-variable]
   68 |     int size_array1 = strlen("аналитик");
      |         ^~~~~~~~~~~
```


### gcc con el estandar c11:
#### **$ gcc -Wall exampleStrings.c -std=c11**

```bash
exampleStrings.c:22:19: warning: missing terminating " character
   22 | const char* s1 = R"foo(
      |                   ^
exampleStrings.c:22:19: error: missing terminating " character
   22 | const char* s1 = R"foo(
      |                   ^~~~~
exampleStrings.c:22:18: error: ‘R’ undeclared here (not in a function)
   22 | const char* s1 = R"foo(
      |                  ^
exampleStrings.c:23:1: error: expected ‘,’ or ‘;’ before ‘Hello’
   23 | Hello
      | ^~~~~
exampleStrings.c:25:5: warning: missing terminating " character
   25 | )foo";
      |     ^
exampleStrings.c:25:5: error: missing terminating " character
   25 | )foo";
      |     ^~
exampleStrings.c: In function ‘gets_example_func’:
exampleStrings.c:32:16: warning: ‘return’ with a value, in function returning void [-Wreturn-type]
   32 |         return 1;
      |                ^
exampleStrings.c:28:6: note: declared here
   28 | void gets_example_func(void) {
      |      ^~~~~~~~~~~~~~~~~
exampleStrings.c: In function ‘get_y_or_n’:
exampleStrings.c:51:2: warning: implicit declaration of function ‘gets’; did you mean ‘fgets’? [-Wimplicit-function-declaration]
   51 |  gets(response);
      |  ^~~~
      |  fgets
exampleStrings.c: In function ‘main’:
exampleStrings.c:94:11: error: ‘s2’ undeclared (first use in this function); did you mean ‘s1’?
   94 |     puts (s2);
      |           ^~
      |           s1
exampleStrings.c:94:11: note: each undeclared identifier is reported only once for each function it appears in
exampleStrings.c:73:10: warning: unused variable ‘analitic3’ [-Wunused-variable]
   73 |     char analitic3[100]="аналитик";
      |          ^~~~~~~~~
exampleStrings.c:69:9: warning: unused variable ‘size_array2’ [-Wunused-variable]
   69 |     int size_array2 = 100;
      |         ^~~~~~~~~~~
exampleStrings.c:68:9: warning: unused variable ‘size_array1’ [-Wunused-variable]
   68 |     int size_array1 = strlen("аналитик");
      |         ^~~~~~~~~~~
      
```


### Compilación con g++:
#### **g++ -Wall exampleStrings.c**

```bash
exampleStrings.c: In function ‘void gets_example_func()’:
exampleStrings.c:32:16: error: return-statement with a value, in function returning ‘void’ [-fpermissive]
   32 |         return 1;
      |                ^
exampleStrings.c: In function ‘const char* get_dirname(const char*)’:
exampleStrings.c:39:18: error: invalid conversion from ‘const char*’ to ‘char*’ [-fpermissive]
   39 |   slash = strrchr(pathname, '/');
      |           ~~~~~~~^~~~~~~~~~~~~~~
      |                  |
      |                  const char*
exampleStrings.c: In function ‘void get_y_or_n()’:
exampleStrings.c:51:2: error: ‘gets’ was not declared in this scope; did you mean ‘fgets’?
   51 |  gets(response);
      |  ^~~~
      |  fgets
exampleStrings.c: In function ‘int main(int, char**)’:
exampleStrings.c:67:23: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
   67 |     char *ptr_char  = "new string literal";
      |                       ^~~~~~~~~~~~~~~~~~~~
exampleStrings.c:68:9: warning: unused variable ‘size_array1’ [-Wunused-variable]
   68 |     int size_array1 = strlen("аналитик");
      |         ^~~~~~~~~~~
exampleStrings.c:69:9: warning: unused variable ‘size_array2’ [-Wunused-variable]
   69 |     int size_array2 = 100;
      |         ^~~~~~~~~~~
exampleStrings.c:73:10: warning: unused variable ‘analitic3’ [-Wunused-variable]
   73 |     char analitic3[100]="аналитик";
      |          ^~~~~~~~~
```


## Corrección de warnings:

Para la eliminación de los warnings se han realizado las siguientes modificaciones:


- Para el primero de los warnings, correspondiente con la función gets_example_func, bastaría con eliminar el return 1, ya que se trata a su vez de una fución void.

- Para el segundo warning, dentro de la función get_y_or_n, se ha sustituido la función función gets por un scanf. También en esta, en el char response[8], al reservarse más memoria de la necesaria, bastaría con sustituirlo por un char value, ya que solo se almacenará una letra en este.


Otras modificaciones:

- Comprobación del número de argumentos introducidos para ejecutar el programa.

- Asignación de memoria para el puntero *ptr_char

- Modificación de los tipos int de las líneas 68 y 69 por size_t.

- En el main se han comentado las líneas 68, 69 y 73, puesto que esas variables no se utilizaban.



## Reglas y recomendaciones CMU-Cert:

Las líneas indicadas son con respecto al código sin correcciones.

| Regla | Descripción | Línea |
| ------ | ------ | ------ |
| **STR31-C** | Guarantee that storage for strings has sufficient space for character data and the null terminator | 51 |
| **MSC34-C** | Do not use deprecated or obsolescent functions | 51 |
| **ARR32-C** | Ensure size arguments for variable length arrays are in a valid | 48 |
| **ARR02-C** | Explicitly specify array bounds, even if implicitly defined by an initializer | 18 |
| **MEM35-C** | Always allocate sufficient memory for an object | 17, 18, 66 |
| **STR30-C** | Do not attempt to modify String literals | 101 |
| **STR36-C - STR11-C** | Do not specify the bound of a character array initialized witha string literal | 29, 48, 62, 63, 64, 65, 73 |
| **STR32-C** | Null-terminate byte strings as required.Do not pass a non-null-terminatedcharacter sequence to a library function that expects a string. | 22, 26, 38, 67 |
| **MEM31-C** | Free dynamically allocated memory when no longer needed | En todos los punteros |
| **MEM32-C** | Detect and handle memory allocation errors | 67 |

















