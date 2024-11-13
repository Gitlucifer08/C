# STRINGS

- character array with a null character ( \0 ) is known as strings .
- without the null character at the end character array is not considered as an string .
- can't declare array or string without size that will generate an error but array declaration can be done at the same time without specifying size arr[] = {'a','b','c'};

![alt text](image-19.png)

![alt text](image-20.png)

![alt text](image-21.png)

![alt text](image-22.png)

![alt text](image-23.png)

![alt text](image-24.png)

![alt text](<Screenshot 2024-11-02 170933.png>)

![alt text](image-25.png)

![alt text](image-26.png)

![alt text](image-27.png)

![alt text](image-28.png)

![alt text](image-29.png)

![alt text](image-30.png)

![alt text](<Screenshot 2024-11-02 183655.png>)

![alt text](image-31.png)

![alt text](image-32.png)

![alt text](image-33.png)

![alt text](image-34.png)

![alt text](image-35.png)

## BUILT IN FUNCTION IN string.h

![alt text](image-18.png)

## ANOTHER WAY OF INITIALISING STRINGS

![alt text](image-10.png)

![alt text](image-12.png)

 new string is formed when changing the whole string and the pointer prints first character of the new string now

![alt text](image-13.png)

![alt text](image-14.png)

![alt text](image-15.png)

![alt text](image-16.png)

## COPY ONE STRING TO ANOTHER

![alt text](image-17.png)

## WAYS OF PRINTING PARTICULAR ELEMENTS

![alt text](image-9.png)

### ASCII VALUES

- 'A' = 65
- 'a' = 97
- '0' = 48
- '9' = 57

### NULL CAHARACTER ( \0 )

- Null character is represented by \0 . It is used to end a string
- ASCII value of null character ( \0 ) is zero .
- it will never be printed but stll occupy space .

![alt text](image.png)

#### use of null character

- it is used to  end a string , when we don't remember its size .

### STRING INITIALIZATION

#### METHOD 1

![alt text](image-3.png)

#### METHOD 2

![alt text](image-4.png)

- no need of \0 as in this method computer automatically  add \0 at the end of  string , due to this size of string increases by 1 byte example -->
![alt text](image-5.png)

- if we are assigning the size of a string always assign it one more than its actual size .
![alt text](image-6.png)

### ACCESSING  STRING ELEMENTS

- we can access string elements using index .
![alt text](image-7.png)

### MODIFYING STRING ELEMENTS

- we can modify string elements using index .
![alt text](image-8.png)
