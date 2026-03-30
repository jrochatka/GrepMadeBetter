# GrepMadeBetter
GrepMadeBetter is a simple tool for phrase searching among files.

## Description
GMB is a grep like CLI (command line interface) program, that searches for user-defined phrases in files. It supports text, markdown and python/c++ files as well as special formating of output. Additional information: 
* compatible with Linux OS
* Polish language supported

## Contributors
Julia Rochatka @jrochatka (Dev)\
Dominik Cedro @dominikcedro (PO)

## PoC GMB in Python

### Requirements
* Python 3.*
* Have a file "poc_grep.txt" ready with some contents.
* In the "main.py" file, choose the PHRASE you wish to look for.

### How to run it
```bash
python3 main.py
```
Expect printed out message, either "True" if PHRASE appears in the file or "False" if it does not.
