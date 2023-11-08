```
We are given a binary named 'main.exe' that does nothing really on being detonated.
lets see what the program is actually doing : 
```
```
NimmainInner is the path that we have to generally follow.
It is resolving the path of the exe file in the stack.
It is also resolving a URL 
```

<u>http://freetshirts.local/key.crt</u>

```
It is being acessed by using HTTP protocol. If it is not acessed then it prints "Error" simply.
Then it evaluates the SHA256 of the body of the response from the url and compares it with a stored constant buffer if they are equal it prints "[!]!Boom!" else it prints "[+]No,dice Sorry!".
```


```
The exe takes a lot of time to acess the url through the http url.
75 15 C7 45 E8 29 00 00 00 C7 45 EC 24 7B 44 00 
Above is the hex code for jnz instruction with some conditions above it.
74 15 C7 45 E8 29 00 00 00 C7 45 EC 24 7B 44 00
this will be the same instruction but for the condition to be opposite and then the exe will always print  "Boom" isntead of the other string due to this patch.
```
```
Give administrator privileges to the IDA Pro application to patch the input file. 
```
