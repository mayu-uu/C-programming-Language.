# FILE HANDLING

## File

1. Files are storage abstraction provided by the Operating Systems.

2. Applications generate / require information that need to be written to / read from secondary storage in form of data files.

## A FILE Structure.

1. The first task is to establish a buffer area where the information is to be temporarily stored while being transferred between computer's memory and data files.

2. The buffer area is established by :

```diff
FILE *ptvar;
```

3. FILE is a special structure type that establishes the buffer area and _ptvar_ is a pointer that indicates the beginning of the buffer area.

4. _ptvar_ - is often referred to as _stram Pointer_ .

5. FILE pointers predefined in stdio.h\
   **stdin** - a pointer to a FILE which refers to the standard input stream, usually a keyboard.\
   **stdout** - a pointer to a FILE which refers to the standard output stream, usually a display terminal.\
   **stderr** - a pointer to a FILE which refers to the standard error stream, often a display terminal.\

6. A data file must be opened before it can be created or processed.

```diff
ptvar = fopen(file-name , file-type);
```

```c
FILE *pt = fopen("input.txt" , "w");
fclose(pt);
```

| File-Type | Meaning                                                                                                                                      |
| :-------- | :------------------------------------------------------------------------------------------------------------------------------------------- |
| _r_       | Open an existing file and is for **READING-ONLY**                                                                                            |
| _w_       | Open a new file for **WRITING ONLY**. If a file with the same name is already present it is destroyed and a new file is created.             |
| _a_       | Open an existing file for appending(to add new information at the end of the file.)                                                          |
| _r+_      | Open an existing file for both **READING AND WRITING**                                                                                       |
| _w+_      | Open a new file for both **READING AND WRITING** .If a file with the same name is already present it is destroyed and a new file is created. |

7. _NULL_ is returned when the mentioned file can not be found.

8. Finally, a data file must be closed at the end of the program with the help of fclose. It returns EOF if error or 0 if file is closed successully.

```diff
fclose(ptvar);
```

## Reading a Data File

1. A data file can be read using getc() and can be displayed on the starndard output screen with the help of putc().

```c
int main(){
    FILE *fp;
    char c;
    if(fpt = fopen("input.dat" , "w")==NULL){
        printf("Error while opening the file.\n");
        return 0;
    }

    else{
        while(c!= '\n'){
            putchar(getc(fpt));
        }
    }
    fclose(fpt);
}
```

## Character I/O

1. **Writing a character**

```c
FILE *fp = fopen("input.dat" , "w");
int fputc(int ch , FILE *fp);
```

$\implies$ Here fp is the file pointer where data is to be written.

$\implies$ Returns the character is successful , EOF otherwise.

2. **Reading a character**

```c
int fgetc(FILE *fp);
```

3. **Writing a string**

$\implies$ It is used to write contents of the file

```diff
fputs(const char str , FILE *fp);
```

```c
void write(char str[])
{
FILE *fp = fopen("input.txt" , "w");
fputs(str , fp);
fclose(fp);
}
```

4. **Reading a string**

```diff
char *fgets(char str[] ,int  length , FILE *fp);
```

$\implies$ Reads a string from the specified file until either a newline character is read or length-1 characters have been read.

```c
int main(){
    char buff[100];
    int n = 10;
    fgets(buff , n , stdin);
}
```

## Usinf foef()

1. It returns true (1) if the end of the file is reached; otherwise it returns false (0).

2. It can be used for both text and binary files.

```diff
int feof(FILE *fp);
```

Example

```c
while(!feof(fp)){
    char ch = fgetc(fp);
}
```

## The rewind() function

1. It resets the file position pointer indicator to the beginning of the file specified as its argument.

```c
void rewind(FILE *fp);
```

## Erasing a File

1. Returns zero if successful; otherwise a non-zero value.

```c
int remove(const char *filename);
```

## Flushing

1. Writes the content of any buffered data to the associated file.

2. If _fp_ is NULL, all opened files are flushed.

```c
int fflush(FILE *fp);
```

## fread() and fwrite()

1. It is used to write and read data which are longer than 1 byte.

_READING THE DATA FROM A FILE_

```c
size_t fread(void *buffer, size_t num_bytes, size_t count,  FILE *fp);
```

$\implies$ Buffer is pointer to a region of memory that will receive the data from the file.\
$\implies$ Count is number items read with each item being num byte bytes in length.\
$\implies$ Returns the number of items read.

_WRITING A DATA FILE_

```c
size_t fwrite(const void *buffer, size_t num_bytes, size_t count, FILE *fp);
```

2. Typically, used for binary files.

3. Useful for reading and writing user-defined data types.

## fprintf() & fscanf()

1. Not always efficient, extra overhead.

2. File content is human readable.

```c
int fprintf(FILE *fp, const char *control_string, ...);
int fscanf(FILE *fp, const char *control_string, ...);
```
