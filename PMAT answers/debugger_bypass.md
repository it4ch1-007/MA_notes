```
We are given an exe file named "something-cpp" that is detecting the debugger and hiding its activity if it is being debugged .
```
```
Most of the malwares detect the presence of the debugger by detecting the return value of the function IsDebuggerPresent()
function that generally seeks the value of BeingDebugged() 
```

```
FS:[0x00] : Current SEH Frame
FS:[0x18] : TEB (Thread Environment Block)
FS:[0x20] : PID
FS:[0x24] : TID
FS:[0x30] : PEB (Process Environment Block)
FS:[0x34] : Last Error Value

In this GS register is used instead of FS register when in x64 systems

PEB has the BeingDebugged() function that helps to detect whether there is a debugger running on the exe file or not 
```
```
For PEB , 0x60 is moved into the GS register and PEB is setup for the x64 system.
We patched the same jnz instruction to jz instruction and then we are able to bypass the debugger check we could also turn the instruction to nop sled by patching the bytes of the instruction and adding three 0x90 at the start of the instruction bytes.
```


