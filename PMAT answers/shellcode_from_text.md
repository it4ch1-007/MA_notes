```
Now we are given an exe file that has shellcode injection into it and we have to analyse and get the working of the shellcode inside the exe.
```
- We are given a .cs file that has been written in C# language and thus we have to open it in dnSpy to identify what the shellcode does and where is the shellcode actually.

- We are given a C# code in which: 
```
VirtualAlloc(IntPtr.Zero, rsrc.Length, WinAPI.MEM_COMMIT, WinAPI.PAGE_READWRITE)
```
This desribes that the program is trying to allocate a space in the memory of the program using VirtualAlloc() function and allocates the memory as readable and writable while the allocation starts from the zero pointer of the memory.

- The program checks if the code in the program memory is empty or not and does'nt executw the shellcode if it is empty.

- We have used nasm disassembler to disassemble the shellcode we have obtained from the malware program.

```
ndisasm -b32 file.bin
``` 

- Here file.bin is the dump of the shellcode containing it into its program.

- We can easily obtain the disassembly of the shellcode in a text file using nasm disassembler.

- shellcode_to_exe.py python file converts the shellcode to an exe that can be easily used in IDA.

```
for ( i = NtCurrentPeb()->Ldr->InMemoryOrderModuleList.Flink; ; i = v13->Flink )
```
- This is the PEB traversal technique as we go to Ldr and then we go to the InMemoryModuleList via Flink.

```
v3 = Flink_low + __ROR4__(v3, 13);
```

- This describes that the Flink is being iterated via ROT13.

- The exe is using API hashes via executing ROT13 cipher identified by :

```
push 0xA779563A        ; hash( "wininet.dll", "InternetOpenA" )
```
```
 push 0x3B2E55EB        ; hash( "wininet.dll", "HttpOpenRequestA" )
```
```
push 0x869E4675        ; hash( "wininet.dll", "InternetSetOptionA" )
```
```
push 0x7B18062D        ; hash( "wininet.dll", "HttpSendRequestA" )
```
```
push 0xE2899612        ; hash( "wininet.dll", "InternetReadFile" )
```
```
0x56A2B5F0 : exitprocess hardcoded
```
- Above are the various hashes that the exe is resolving during its execution and it is actually using the wininet.dll to open and send some requests to a remote server using Http port.

- Thus as this shellcode is accessing a remote server thus it is similar to a RAT malware. 

```
javaupdate.exe
burn.ec2-13-7-109-121-ubuntu-2004.local
.file
dump.asm
.text
.absolut
@feat.00
```

- We have got these strings from the malware exe file and thus we can infer that the server the malware is accessing probably is 

```
burn.ec2-13-7-109-121-ubuntu-2004.local
```

- The exe file is also executing the javaupdate.exe that is a malicious file that can connect to any server using LAN or WIFI and record any mouse or keyboard inputs to act as a keylogger and many more malicious activist.

- alloca() function is used to allocate memory on the stack and then when the use of the memory ends then the memory is freed automatically.

