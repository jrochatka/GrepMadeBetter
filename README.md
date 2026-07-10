# GrepMadeBetter
GrepMadeBetter is a simple tool for phrase searching among files.

## Description
GMB is a grep like CLI (command line interface) program, that searches for user-defined phrases in files. It supports text, markdown and python/c++ files as well as special formating of output. Additional information: 
* compatible with Linux OS
* Polish language supported

## Architecture (planned, still in developement)

The project follows a modular CLI architecture with clear separation of concerns.

### Overview

The program is structured as a simple processing pipeline:

CLI input → ArgumentParser → Config → FileReader → SearchEngine → OutputFormatter → stdout

### Modules

#### ArgumentParser
Responsible for parsing command-line arguments (`argv`) and building a `Config` object.

#### Config
A lightweight data structure that stores all user-provided options, such as:
- search pattern
- file path
- flags (e.g. ignore case)

#### FileReader
Reads input files and returns their content as a list of lines.

#### SearchEngine
Implements the core search logic.

#### OutputFormatter
Formats and prints results in a `grep-like` output style.

### Design principles

- Single Responsibility Principle (each module has one responsibility)
- Separation of concerns (I/O, parsing, and search logic are separated)
- Stateless processing (data flows through the pipeline without global state)
- Dependency Injection (components receive data rather than creating dependencies internally)

## Usage

To build the project

```bash
make
```
To build and run the project:

```bash
make run
```

## Contributors
Julia Rochatka @jrochatka (Dev)
Dominik Cedro @dominikcedro (PO)
