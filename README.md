# 42_Libft project

In this project, we build our own library to help us working fluently with C language. This a detailed sum up of all the functions in the libft:

### memset 

Prototype:
```c
void *memset(void *str, int c, size_t n)
```

changes n caracters of the initial string with the caracters 

Exemple:
```c
char str[50] = "This is string.h library function"
puts(str);
memset(str,'$',7);
puts(str);
```
   
Result:
```c
This is string.h library function
$$$$$$$ string.h library function
```

### bzero

Prototype:
```c
void bzero(void *s, size_t n);
```
The bzero() function sets the first n bytes of the area starting at s
to zero (bytes containing '\0').

Exemple:
```c
char s[50] = "This is string.h library function"
puts(s);
bzero(s,7);
puts(s);
```
   
"Result":
```c
This is string.h library function
\0\0\0\0\0\0\0 string.h library function
```

### memcpy


