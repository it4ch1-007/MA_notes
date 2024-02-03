# 5

- The exe is demanding a text file `key.txt` that is used to do `something`.
- There was a custom base64 script to be written and then the executable was doing some operatiuons on the characters of the string that involved the string `flarebearstare`.
- Then the string was base64 encoded and then sent via network to the other person online.

# 7

- A .NET assembly executable has been given and we open it inside dnSpy.
- The executable is obfuscated thus we will use de4dot to deobfuscate it.
- Try to use de4dot in order to deobfuscate a .NET assembly no matter what the encoding is.

# 8 

`zsteg -e bgr IMAGE.png > output.bin` is the command to extract all the files that have been detected hidden inside the image by the zsteg itslef.


# 9 

- The packed executable has broken imports possibly and thus we have to make dynamic execution of the executable to find where does ut demands the input from the user.
- loading itself using API hashing technique must be using `GetModuleFileNameA`.
- Use the HashDB plugin in IDA to be able to decipher any API hashed functions.
- We generally have to open the executable in IDA Pro and of we are trying dynamic debugging then we have to find the instrns like `xor`,`cmp` and `rol`. `The loops are the major part` as the loops should have variables in the registers modifying their values everytime the loop ios restarted.
- Each byte character of the input is being xored.
- The xor function is being dynamically loaded into the memory and thus have to be deciphered byte by byte using dynamic debugging or use `idapython script` or `tracer` that will trace all the paths in the debugging.
- We can also try `Time Travel Debugging` in this executable.
- The shellcode is dynamic and is being changed dynamically on the basis of instructions being executed.
- The ROR operations and the ROL operations need the bit_length and thus we have to get it by bruteforcing the bit_length as we have the result of one operation on our wrong prototype password.


# 10

- The identifications of the AutoIt scripts loaded executables are:

    - `IsThemeActive()` function
    - `?_set_new_mode@@YAHH@Z` and `?_set_new_handler@@YAP6AHI@ZP6AHI@Z@Z`
    and rest of the executable is the same as an executable with `WinMain` function.

    

