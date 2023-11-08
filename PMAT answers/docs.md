```
Now we are given some malwares that are inside some ok looking docs or general files.
```

```
Through procmonitor we get that the word file is starting a new process named ai.exe that is a child process of 'WINWORD.exe' that is the name of the process that runs the word.exe application.
```
```
The word document is executing the ai.exe that is inside the folder Program Files in the Users directorey that too as root and the 'ai.exe' of the Windows operates standardly using the file ""WordCombinedFloatieLreOnline.onnx"" that is a file having any ml model or dataset.
```